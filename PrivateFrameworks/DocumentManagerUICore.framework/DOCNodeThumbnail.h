
@interface DOCNodeThumbnail : NSObject <DOCThumbnail, DOCThumbnailListener> {
    DOCThumbnailRequest * _currentRequest;
    DOCThumbnailDescriptor * _descriptor;
    <DOCThumbnail> * _fallback;
    NSMutableArray * _generationCompletionHandlers;
    DOCThumbnailGenerator * _generator;
    NSHashTable * _listeners;
    bool  _needsUpdate;
    <DOCNode> * _node;
    DOCNodeThumbnailIdentifier * _nodeThumbnailIdentifier;
    bool  _representativeIcon;
    UIImage * _thumbnailImage;
}

@property (nonatomic, readonly) DOCThumbnailRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DOCThumbnailDescriptor *descriptor;
@property (nonatomic, retain) <DOCThumbnail> *fallback;
@property (nonatomic, readonly) DOCThumbnailGenerator *generator;
@property (readonly) bool hasFinishedTryingToFetchCorrectThumbnail;
@property (readonly) unsigned long long hash;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (nonatomic, readonly) bool isRepresentativeIcon;
@property (nonatomic, readonly) NSHashTable *listeners;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly) double minimumSize;
@property (nonatomic, readonly) bool needsUpdate;
@property (nonatomic, readonly) <DOCNode> *node;
@property (nonatomic, readonly) DOCNodeThumbnailIdentifier *nodeThumbnailIdentifier;
@property (nonatomic) bool representativeIcon;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (nonatomic, readonly) UIImage *thumbnailImage;

- (void).cxx_destruct;
- (void)_callGenerationCompletionHandlers;
- (void)_cancelCurrentRequest;
- (void)_fetchThumbnailWithOptions:(unsigned long long)arg1;
- (void)_notifyListeners;
- (void)addListener:(id)arg1;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)currentRequest;
- (id)descriptor;
- (id)fallback;
- (void)fetchWithOptions:(unsigned long long)arg1;
- (id)generator;
- (bool)hasFinishedTryingToFetchCorrectThumbnail;
- (id)initWithGenerator:(id)arg1 node:(id)arg2 descriptor:(id)arg3 fallback:(id)arg4;
- (bool)isInteractive;
- (bool)isLoading;
- (bool)isRepresentativeIcon;
- (id)listeners;
- (double)minimumSize;
- (bool)needsUpdate;
- (id)node;
- (id)nodeThumbnailIdentifier;
- (bool)registerGenerationCompletionHandler:(id /* block */)arg1;
- (void)removeListener:(id)arg1;
- (bool)representativeIcon;
- (double)scale;
- (void)scheduleUpdateIfNeeded;
- (void)setFallback:(id)arg1;
- (void)setNeedsUpdate;
- (void)setRepresentativeIcon:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)style;
- (id)thumbnail;
- (id)thumbnailImage;
- (void)thumbnailLoaded:(id)arg1;
- (void)thumbnailOperationDidLoadThumbnail:(id)arg1 representativeIcon:(bool)arg2;
- (void)thumbnailOperationFailedToLoadThumbnail;
- (void)updateNodeThumbnailIdentifierTo:(id)arg1;

@end

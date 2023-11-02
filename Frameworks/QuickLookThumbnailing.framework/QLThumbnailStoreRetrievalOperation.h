
@interface QLThumbnailStoreRetrievalOperation : NSOperation {
    QLThumbnailAddition * _addition;
    bool  _allowsThumbnailGeneration;
    NSURL * _destinationURL;
    NSURL * _documentURL;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    bool  _generateThumbnailsAtBackgroundPriority;
    NSObject<OS_os_activity> * _generationActivity;
    NSObject<OS_os_activity> * _retrievalActivity;
    <QLThumbnailGenerationRequest><NSXPCProxyCreating> * _thumbnailRequest;
    bool  _thumbnailWasJustAutomaticallyGenerated;
}

@property (readonly) QLThumbnailAddition *addition;
@property bool allowsThumbnailGeneration;
@property (retain) NSURL *destinationURL;
@property (retain) NSURL *documentURL;
@property (retain) NSError *error;
@property (getter=isExecuting, nonatomic) bool executing;
@property (getter=isFinished, nonatomic) bool finished;
@property (readonly) GSAddition *genStoreAddition;
@property bool generateThumbnailsAtBackgroundPriority;
@property (readonly) NSData *serializedQuickLookMetadataDictionary;
@property (readonly) NSDictionary *thumbnailImagesDictionary;
@property (retain) <QLThumbnailGenerationRequest><NSXPCProxyCreating> *thumbnailRequest;
@property (readonly) bool thumbnailWasAutomaticallyGenerated;
@property (readonly) bool thumbnailWasJustAutomaticallyGenerated;

+ (bool)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1;

- (void).cxx_destruct;
- (void)_afterDeterminingWhetherWeCanGenerate:(bool)arg1;
- (void)_afterThumbnailIsGenerated;
- (void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1;
- (bool)_finishIfNeeded;
- (void)_finishWithError:(id)arg1;
- (void)_generateThumbnail;
- (id)addition;
- (void)afterThumbnailIsPutInGenstore;
- (bool)allowsThumbnailGeneration;
- (void)cancel;
- (id)description;
- (id)destinationURL;
- (id)documentURL;
- (id)error;
- (id)genStoreAddition;
- (bool)generateThumbnailsAtBackgroundPriority;
- (id)init;
- (id)initWithDocumentAtURL:(id)arg1;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (id)serializedQuickLookMetadataDictionary;
- (void)setAllowsThumbnailGeneration:(bool)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setGenerateThumbnailsAtBackgroundPriority:(bool)arg1;
- (void)setThumbnailRequest:(id)arg1;
- (void)start;
- (id)thumbnailImagesDictionary;
- (id)thumbnailRequest;
- (bool)thumbnailWasAutomaticallyGenerated;
- (bool)thumbnailWasJustAutomaticallyGenerated;

@end

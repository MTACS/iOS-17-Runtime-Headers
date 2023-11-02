
@interface AVCaptureDeferredPhotoProcessingRequest : NSObject {
    NSMutableArray * _delegatesStorage;
    int  _expectedPhotoCount;
    unsigned int  _firedCallbackFlags;
    int  _firedPhotoCallbacksCount;
    NSString * _originalDeferredPhotoIdentifier;
    NSMutableArray * _photoProxies;
}

@property (readonly) NSArray *delegatesStorage;
@property (nonatomic) int expectedPhotoCount;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (nonatomic) int firedPhotoCallbacksCount;
@property (nonatomic, copy) NSString *originalDeferredPhotoIdentifier;
@property (readonly) NSMutableArray *photoProxies;

- (void)addDelegate:(id)arg1;
- (void)addProxy:(id)arg1;
- (void)dealloc;
- (id)delegatesStorage;
- (id)description;
- (int)expectedPhotoCount;
- (unsigned int)firedCallbackFlags;
- (int)firedPhotoCallbacksCount;
- (id)initWithDelegate:(id)arg1 photoProxy:(id)arg2;
- (id)originalDeferredPhotoIdentifier;
- (id)photoProxies;
- (void)setExpectedPhotoCount:(int)arg1;
- (void)setFiredCallbackFlags:(unsigned int)arg1;
- (void)setFiredPhotoCallbacksCount:(int)arg1;
- (void)setOriginalDeferredPhotoIdentifier:(id)arg1;

@end

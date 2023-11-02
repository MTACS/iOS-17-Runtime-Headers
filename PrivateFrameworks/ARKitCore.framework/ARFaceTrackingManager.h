
@interface ARFaceTrackingManager : NSObject {
    long long  _maximumNumberOfTrackedFaces;
    NSUUID * _singleUserAnchorIdentifier;
}

@property (nonatomic, readonly) long long maximumNumberOfTrackedFaces;

+ (void)initialize;
+ (bool)isSupported;

- (void).cxx_destruct;
- (void)dealloc;
- (id)faceTrackingOptionsFromImageData:(id)arg1 withCallback:(id /* block */)arg2;
- (id)init;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfTrackedFaces;
- (id)processData:(id)arg1;

@end

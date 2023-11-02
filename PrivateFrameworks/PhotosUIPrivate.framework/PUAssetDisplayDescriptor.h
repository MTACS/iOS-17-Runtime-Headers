
@interface PUAssetDisplayDescriptor : NSObject {
    PUAssetReference * _assetReference;
    NSDate * _modifiedAfterDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoSeekTime;
}

@property (nonatomic, readonly) PUAssetReference *assetReference;
@property (nonatomic, readonly) NSDate *modifiedAfterDate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } videoSeekTime;

+ (id)assetDisplayDescriptorForSimpleNavigationToAssetReference:(id)arg1;

- (void).cxx_destruct;
- (id)assetReference;
- (id)init;
- (id)initWithAssetReference:(id)arg1 modifiedAfterDate:(id)arg2 videoSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)modifiedAfterDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoSeekTime;

@end

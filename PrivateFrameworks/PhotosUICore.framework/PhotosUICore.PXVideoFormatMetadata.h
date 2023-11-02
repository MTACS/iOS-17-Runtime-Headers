
@interface PhotosUICore.PXVideoFormatMetadata : NSObject {
    void isProResLog;
    void videoHDRType;
}

@property (nonatomic, readonly) bool isProResLog;
@property (nonatomic, readonly) unsigned long long videoHDRType;

- (id)init;
- (bool)isProResLog;
- (unsigned long long)videoHDRType;

@end

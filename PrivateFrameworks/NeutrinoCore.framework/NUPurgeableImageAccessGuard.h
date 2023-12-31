
@interface NUPurgeableImageAccessGuard : NSObject {
    <NUPurgeableImage> * _accessImage;
    NURegion * _accessRegion;
}

- (void).cxx_destruct;
- (void)_beginAccess;
- (void)_endAccess;
- (void)dealloc;
- (id)initWithRegion:(id)arg1 image:(id)arg2;

@end

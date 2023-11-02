
@interface PGPictureInPictureApplication : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    int  _processIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) int processIdentifier;

+ (id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithProcessIdentifier:(int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPGPictureInPictureApplication:(id)arg1;
- (int)processIdentifier;

@end


@interface IDSCKAccountInfo : NSObject <NSSecureCoding> {
    bool  _supportsDeviceToDeviceEncryption;
}

@property (nonatomic) bool supportsDeviceToDeviceEncryption;

+ (Class)__class;
+ (id)alloc;

- (void)setSupportsDeviceToDeviceEncryption:(bool)arg1;
- (bool)supportsDeviceToDeviceEncryption;

@end

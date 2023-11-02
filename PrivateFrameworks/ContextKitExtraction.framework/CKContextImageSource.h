
@interface CKContextImageSource : NSObject <NSSecureCoding> {
    NSData * _cameraIntrinsics;
    IOSurface * _ioSurface;
    unsigned int  _orientation;
    long long  _profile;
}

@property (nonatomic, retain) NSData *cameraIntrinsics;
@property (nonatomic, retain) IOSurface *ioSurface;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) long long profile;

+ (id)imageSourceForUIImage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cameraIntrinsics;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIOSurface:(id)arg1;
- (id)initWithIOSurface:(id)arg1 cameraIntrinsics:(id)arg2;
- (id)ioSurface;
- (bool)isEqual:(id)arg1;
- (unsigned int)orientation;
- (long long)profile;
- (void)setCameraIntrinsics:(id)arg1;
- (void)setIoSurface:(id)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setProfile:(long long)arg1;

@end

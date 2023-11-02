
@interface BWStillImageCaptureFrameInfo : NSObject <NSSecureCoding> {
    unsigned long long  _mainFlags;
    unsigned long long  _sifrFlags;
}

@property (nonatomic, readonly) unsigned long long mainFlags;
@property (nonatomic, readonly) unsigned long long sifrFlags;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMainFlags:(unsigned long long)arg1 sifrFlags:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mainFlags;
- (unsigned long long)sifrFlags;

@end

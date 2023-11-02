
@interface PCNativePrimitiveColor : NSObject <NSSecureCoding> {
    long long  _rawValue;
}

@property (nonatomic, readonly) unsigned char alpha;
@property (nonatomic, readonly) unsigned char blue;
@property (nonatomic, readonly) unsigned char green;
@property (nonatomic, readonly) long long rawValue;
@property (nonatomic, readonly) unsigned char red;

+ (bool)supportsSecureCoding;

- (unsigned char)alpha;
- (unsigned char)blue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)green;
- (id)initWithCoder:(id)arg1;
- (id)initWithRGBA:(long long)arg1;
- (long long)rawValue;
- (unsigned char)red;

@end

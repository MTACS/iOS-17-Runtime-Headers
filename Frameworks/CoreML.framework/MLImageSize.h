
@interface MLImageSize : NSObject <NSSecureCoding> {
    long long  _pixelsHigh;
    long long  _pixelsWide;
}

@property (readonly) long long pixelsHigh;
@property (readonly) long long pixelsWide;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToImageSize:(id)arg1;
- (long long)pixelsHigh;
- (long long)pixelsWide;

@end

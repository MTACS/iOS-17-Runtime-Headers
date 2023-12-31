
@interface CLGpsSignalQuality : NSObject <NSSecureCoding> {
    int  _quality;
}

@property (nonatomic) int quality;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignalQuality:(int)arg1;
- (int)quality;
- (void)setQuality:(int)arg1;

@end

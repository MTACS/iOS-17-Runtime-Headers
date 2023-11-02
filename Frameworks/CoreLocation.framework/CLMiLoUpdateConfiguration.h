
@interface CLMiLoUpdateConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _isLowLatency;
}

@property (nonatomic, readonly) bool isLowLatency;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsLowLatency:(bool)arg1;
- (bool)isLowLatency;

@end

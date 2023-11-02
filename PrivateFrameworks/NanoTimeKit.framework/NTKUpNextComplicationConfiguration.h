
@interface NTKUpNextComplicationConfiguration : NSObject <NSSecureCoding> {
    long long  _family;
}

@property (nonatomic, readonly) long long family;

+ (id)bezelConfigurationWithMaskImage:(id)arg1 radius:(double)arg2;
+ (id)graphicRectangularConfiguration;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)family;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamily:(long long)arg1;

@end

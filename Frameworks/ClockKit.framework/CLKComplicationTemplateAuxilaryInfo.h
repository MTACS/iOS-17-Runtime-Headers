
@interface CLKComplicationTemplateAuxilaryInfo : NSObject <NSSecureCoding> {
    bool  _supportsComplicationForegroundModifier;
}

@property (nonatomic) bool supportsComplicationForegroundModifier;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSupportsComplicationForegroundModifier:(bool)arg1;
- (bool)supportsComplicationForegroundModifier;

@end

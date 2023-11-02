
@interface ISImageStyleDescriptor : NSObject <NSCopying, NSSecureCoding> {
    bool  _selectedVariant;
    bool  _templateVariant;
    IFColor * _tintColor;
}

@property (readonly) NSUUID *digest;
@property (nonatomic) bool selectedVariant;
@property (nonatomic) bool templateVariant;
@property (nonatomic, retain) IFColor *tintColor;

+ (id)defaultStyleDescriptor;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)digest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)selectedVariant;
- (void)setSelectedVariant:(bool)arg1;
- (void)setTemplateVariant:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (bool)templateVariant;
- (id)tintColor;

@end


@protocol WFCodableAttributeBackedParameter <NSObject>

@required

- (INCodableAttribute *)codableAttribute;
- (void)setCodableAttribute:(INCodableAttribute *)arg1;
- (void)setStringLocalizer:(INStringLocalizer *)arg1;
- (INStringLocalizer *)stringLocalizer;

@end

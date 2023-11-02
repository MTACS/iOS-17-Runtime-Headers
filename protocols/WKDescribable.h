
@protocol WKDescribable <NSObject>

@required

- (NSString *)description;
- (id /* block */)descriptionBuilderBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NADescriptionBuilder *, void*, id, SEL
- (NADescriptionBuilder *)wk_descriptionBuilder;

@end

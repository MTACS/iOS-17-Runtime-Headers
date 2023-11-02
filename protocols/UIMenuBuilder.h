
@protocol UIMenuBuilder

@required

- (UIAction *)actionForIdentifier:(NSString *)arg1;
- (UICommand *)commandForAction:(SEL)arg1 propertyList:(id)arg2;
- (void)insertChildMenu:(UIMenu *)arg1 atEndOfMenuForIdentifier:(NSString *)arg2;
- (void)insertChildMenu:(UIMenu *)arg1 atStartOfMenuForIdentifier:(NSString *)arg2;
- (void)insertSiblingMenu:(UIMenu *)arg1 afterMenuForIdentifier:(NSString *)arg2;
- (void)insertSiblingMenu:(UIMenu *)arg1 beforeMenuForIdentifier:(NSString *)arg2;
- (UIMenu *)menuForIdentifier:(NSString *)arg1;
- (void)removeMenuForIdentifier:(NSString *)arg1;
- (void)replaceChildrenOfMenuForIdentifier:(void *)arg1 fromChildrenBlock:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSArray *, id /* block */, NSArray *, void*
- (void)replaceMenuForIdentifier:(NSString *)arg1 withMenu:(UIMenu *)arg2;
- (UIMenuSystem *)system;

@end

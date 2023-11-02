
@interface WFAppStoreAppContentItem : WFiTunesObjectContentItem

+ (bool)canLowercaseTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)typeDescription;

- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)softwareObject;

@end

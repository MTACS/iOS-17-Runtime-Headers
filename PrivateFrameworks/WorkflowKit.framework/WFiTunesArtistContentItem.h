
@interface WFiTunesArtistContentItem : WFiTunesObjectContentItem

+ (bool)canLowercaseTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)typeDescription;

- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)getListSubtitle:(id /* block */)arg1;

@end

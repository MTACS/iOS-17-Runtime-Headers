
@interface TSWPPropertyConverter : NSObject

+ (void)initialize;
+ (id)mapCharacterPropertiesFromNS:(id)arg1;
+ (void)mapCharacterPropertiesFromNS:(id)arg1 toWP:(id)arg2;
+ (void)mapCharacterPropertiesFromStyle:(id)arg1 secondaryStyle:(id)arg2 toNS:(id)arg3 stickyFont:(id*)arg4 scale:(double)arg5;
+ (void)mapCharacterPropertiesFromStyle:(id)arg1 toNS:(id)arg2 stickyFont:(id*)arg3 scale:(double)arg4;
+ (void)mapCharacterPropertiesFromStyles:(id*)arg1 styleCount:(unsigned int)arg2 toNS:(id)arg3 stickyFont:(id*)arg4 scale:(double)arg5;
+ (void)mapFontFeaturesFromStyle:(id)arg1 secondaryStyle:(id)arg2 toNS:(id)arg3 ioFont:(id*)arg4 ligatures:(int)arg5;
+ (id)newFontWithFeaturesFromFont:(id)arg1 primaryStyle:(id)arg2 secondaryStyle:(id)arg3 ligatures:(int)arg4;
+ (id)propertyMapToDictionary:(id)arg1;

@end

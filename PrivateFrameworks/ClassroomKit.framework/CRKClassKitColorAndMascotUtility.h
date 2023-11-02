
@interface CRKClassKitColorAndMascotUtility : NSObject

+ (unsigned long long)classColorFromClassName:(id)arg1;
+ (id)classThemeColors;
+ (unsigned long long)colorForClass:(id)arg1;
+ (id)colorIdentifierForColorType:(unsigned long long)arg1;
+ (unsigned long long)colorTypeForColorIdentifier:(id)arg1;
+ (id)colorTypesByColorIdentifier;
+ (unsigned long long)defaultMascot;
+ (unsigned long long)mascotForClass:(id)arg1;
+ (id)mascotIdentifierForMascotType:(unsigned long long)arg1;
+ (unsigned long long)mascotTypeForMascotIdentifier:(id)arg1;
+ (id)mascotTypesByMascotIdentifier;
+ (bool)setColor:(unsigned long long)arg1 forClass:(id)arg2 error:(id*)arg3;
+ (bool)setMascot:(unsigned long long)arg1 forClass:(id)arg2 error:(id*)arg3;

@end

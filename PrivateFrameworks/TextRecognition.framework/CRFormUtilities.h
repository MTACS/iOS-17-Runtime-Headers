
@interface CRFormUtilities : NSObject

+ (id)debugDescriptionForField:(id)arg1;
+ (id)detectedFieldRegionsInDocument:(id)arg1 excludingFields:(id)arg2 updateExcludedFields:(bool)arg3;
+ (bool)isRegion:(id)arg1 verticallyAlignedWithRegionBelow:(id)arg2 maxRelativeDistance:(double)arg3;
+ (id)proposedFieldForPoint:(struct CGPoint { double x1; double x2; })arg1 inDocument:(id)arg2 existingFields:(id)arg3;
+ (bool)stringEndsWithColon:(id)arg1;

@end

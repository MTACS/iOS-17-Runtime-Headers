
@interface EXReference : NSObject

+ (bool)edAreaReferenceFromXmlReference:(id)arg1 areaReference:(struct EDAreaReference { int x1; int x2; int x3; int x4; }*)arg2;
+ (id)edDiscontinousReferencesFromXmlRanges:(id)arg1;
+ (id)edReferenceFromXmlReference:(id)arg1;
+ (id)numberToStringBase26:(int)arg1;
+ (id)xmlRangesFromDiscontinuousReferences:(id)arg1;
+ (id)xmlReferenceFromAreaReference:(struct EDAreaReference { int x1; int x2; int x3; int x4; }*)arg1;
+ (id)xmlReferenceFromEDReference:(id)arg1;

@end

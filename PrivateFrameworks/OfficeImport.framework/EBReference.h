
@interface EBReference : NSObject

+ (id)edReferenceFromXlRef:(const struct XlRef { unsigned short x1; unsigned short x2; short x3; short x4; bool x5; }*)arg1;
+ (struct XlRef { unsigned short x1; unsigned short x2; short x3; short x4; bool x5; }*)xlRefFromEDReference:(id)arg1;

@end

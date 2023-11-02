
@interface EBSheet : NSObject

+ (Class)ebSheetClassFromEDSheet:(id)arg1;
+ (Class)edSheetClassFromXlSheetTypeEnum:(int)arg1;
+ (void)readDelayedSheetWithIndex:(unsigned int)arg1 state:(id)arg2;
+ (void)readSheetWithIndex:(unsigned int)arg1 state:(id)arg2;

@end

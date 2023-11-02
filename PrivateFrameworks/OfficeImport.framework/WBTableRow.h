
@interface WBTableRow : NSObject

+ (void)collectCellProperties:(void*)arg1 tracked:(void*)arg2 for:(id)arg3;
+ (void)readCellsFrom:(id)arg1 textRuns:(id)arg2 level:(int)arg3 to:(id)arg4 properties:(void*)arg5 tracked:(void*)arg6;
+ (void)readFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 index:(unsigned long long)arg4 row:(id)arg5;

@end

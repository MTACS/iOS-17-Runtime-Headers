
@interface WBTableCellBodyProperties : NSObject

+ (id)formattingChangeDate:(const struct WrdDateTime { }*)arg1;
+ (void)mapProperties:(id)arg1 toWordProperties:(void*)arg2 index:(unsigned long long)arg3;
+ (void)mapWordProperties:(void*)arg1 toProperties:(id)arg2 index:(unsigned long long)arg3;
+ (void)readFrom:(void*)arg1 tracked:(void*)arg2 properties:(id)arg3 index:(unsigned long long)arg4;
+ (void)write:(id)arg1 wrdProperties:(void*)arg2 tracked:(void*)arg3 index:(unsigned long long)arg4;

@end

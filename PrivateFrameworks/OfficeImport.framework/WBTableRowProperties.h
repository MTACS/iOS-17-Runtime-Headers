
@interface WBTableRowProperties : NSObject

+ (void)mapProperties:(id)arg1 toWordProperties:(void*)arg2;
+ (void)mapWordProperties:(void*)arg1 toProperties:(id)arg2;
+ (void)readFrom:(id)arg1 wrdProperties:(void*)arg2 tracked:(void*)arg3 properties:(id)arg4;
+ (void)write:(id)arg1 properties:(id)arg2 wrdProperties:(void*)arg3 tracked:(void*)arg4;

@end

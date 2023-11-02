
@interface WBParagraphProperties : NSObject

+ (void*)createTrackedPropertiesIfNeeded:(id)arg1;
+ (id)formattingChangeDate:(const struct WrdDateTime { int (**x1)(); int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; }*)arg1;
+ (void)mapWordProperties:(void*)arg1 reader:(id)arg2 toProperties:(id)arg3;
+ (void)readFrom:(id)arg1 wrdProperties:(void*)arg2 tracked:(void*)arg3 document:(id)arg4 properties:(id)arg5;

@end

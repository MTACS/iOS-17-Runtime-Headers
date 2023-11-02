
@interface WXDocument : NSObject

+ (id)documentFrom:(id)arg1 reader:(id)arg2 cancel:(id)arg3 asThumbnail:(bool)arg4;
+ (id)notePositionEnumMap;
+ (id)noteRestartEnumMap;
+ (void)readDocument:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readDocumentSettings:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readFontTable:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readLists:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readSources:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readStyles:(id)arg1 to:(id)arg2 state:(id)arg3;

@end

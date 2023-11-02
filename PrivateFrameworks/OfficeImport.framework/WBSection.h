
@interface WBSection : NSObject

+ (void)mapPrinterSettings:(void*)arg1 toSection:(id)arg2;
+ (void)mapSection:(id)arg1 toSectionProperties:(void*)arg2;
+ (void)mapSectionProperties:(void*)arg1 toSection:(id)arg2;
+ (void)readFrom:(id)arg1 textRun:(struct WrdSectionTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdSectionProperties {} *x5; struct WrdSectionProperties {} *x6; }*)arg2 document:(id)arg3 index:(int)arg4 section:(id)arg5;
+ (void)readHeaderFrom:(id)arg1 type:(int)arg2 index:(int)arg3 header:(id)arg4;

@end

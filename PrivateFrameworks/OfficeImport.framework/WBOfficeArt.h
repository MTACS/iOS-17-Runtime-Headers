
@interface WBOfficeArt : NSObject

+ (void)readFrom:(id)arg1 at:(int)arg2 textRun:(struct WrdCharacterTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg3 paragraph:(id)arg4 to:(id)arg5;
+ (void)setShapeAddress:(const struct WrdFileShapeAddress { int (**x1)(); int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; bool x12; bool x13; bool x14; int x15; }*)arg1 toDrawable:(id)arg2;

@end


@interface WBPicture : WBOfficeArt

+ (id)readDrawableFromReader:(id)arg1 textType:(int)arg2;
+ (void)readFrom:(id)arg1 at:(int)arg2 textRun:(struct WrdCharacterTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg3 paragraph:(id)arg4 to:(id)arg5;

@end

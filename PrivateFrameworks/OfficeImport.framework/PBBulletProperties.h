
@interface PBBulletProperties : NSObject

+ (int)readBulletNumberScheme:(int)arg1;
+ (int)readBulletNumberSchemeFromExtended:(unsigned int)arg1;
+ (id)readBulletProperties:(struct PptParaProperty9 { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; } x1; short x2; bool x3; struct PptTextAutoNumberScheme { unsigned int x_4_1_1 : 6; short x_4_1_2; } x4; }*)arg1 state:(id)arg2;
+ (int)writeBulletNumberScheme:(int)arg1;

@end

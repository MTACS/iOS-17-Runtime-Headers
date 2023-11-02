
@interface OAXTextCharPropertyBag : NSObject

+ (id)oaxUnderlineMap;
+ (void)readCharacterProperties:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (void)readFont:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 characterProperties:(id)arg2;
+ (void)readFormatting:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (unsigned char)readUnderlineType:(id)arg1;
+ (id)stringWithCapsType:(unsigned char)arg1;
+ (id)stringWithStrikeThroughType:(unsigned char)arg1;
+ (id)stringWithUnderlineType:(unsigned char)arg1;

@end

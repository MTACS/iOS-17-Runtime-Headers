
@interface OAXColorMap : NSObject

+ (id)mapColorEnumMap;
+ (void)readFromXmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 toColorMap:(id)arg2;
+ (void)writeColorMap:(id)arg1 elementName:(id)arg2 to:(id)arg3 state:(id)arg4;

@end

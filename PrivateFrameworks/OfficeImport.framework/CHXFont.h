
@interface CHXFont : NSObject

+ (id)defaultEdRunCollectionForTitle:(id)arg1 titleElement:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2 state:(id)arg3;
+ (id)defaultEdRunCollectionWithState:(id)arg1;
+ (id)edFontFromXmlTextPropertiesElement:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 state:(id)arg2;
+ (id)edFontWithFullOadCharacterProperties:(id)arg1 state:(id)arg2;
+ (id)edFontWithOadCharacterProperties:(id)arg1 state:(id)arg2;
+ (id)edFontWithOadTextBody:(id)arg1 state:(id)arg2;
+ (id)edRunCollectionFromXmlTextPropertiesElement:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 state:(id)arg2;
+ (void)mapFontProperties:(id)arg1 to:(id)arg2;
+ (void)mapFontProperties:(id)arg1 toTextProps:(id)arg2 withEffects:(id)arg3;
+ (id)readParagraphPropertiesFromXmlTextPropertiesParentElement:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 state:(id)arg2;

@end
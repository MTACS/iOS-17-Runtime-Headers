
@interface PXTransition : NSObject

+ (id)directionAttributeMap;
+ (bool)isPowerPoint2010TransitionType:(int)arg1;
+ (bool)isPowerPoint2013TransitionType:(int)arg1;
+ (bool)mapDirection:(id)arg1 outDir:(int*)arg2;
+ (int)readDirection:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 defaultValue:(int)arg2;
+ (int)readInOut:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 defaultValue:(int)arg2;
+ (int)readOrientation:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 attribute:(const char *)arg2 defaultValue:(int)arg3;
+ (int)readReverseDirection:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 defaultValue:(int)arg2;
+ (void)readTransitionFromNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 tgtTransition:(id)arg2 drawingState:(id)arg3;
+ (id)reverseDirectionAttributeMap;
+ (id)transitionNodeMap;
+ (void)writeDirection:(int)arg1 file:(id)arg2;
+ (void)writeInOut:(int)arg1 file:(id)arg2;
+ (void)writeOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3;
+ (void)writeReverseDirection:(int)arg1 file:(id)arg2;
+ (void)writeReverseInOut:(int)arg1 file:(id)arg2;
+ (void)writeReverseOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3;
+ (void)writeTransitionAttributes:(id)arg1 attributePrefix:(id)arg2 file:(id)arg3;
+ (void)writeTransitionFromSlideBase:(id)arg1 file:(id)arg2 state:(id)arg3;
+ (void)writeTransitionOptions:(id)arg1 transitionType:(int)arg2 file:(id)arg3;

@end

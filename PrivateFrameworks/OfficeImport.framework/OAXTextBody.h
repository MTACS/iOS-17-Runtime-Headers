
@interface OAXTextBody : NSObject

+ (unsigned char)readAnchorType:(id)arg1;
+ (unsigned char)readFlowType:(id)arg1;
+ (void)readFlowType:(id)arg1 textBodyProperties:(id)arg2;
+ (unsigned char)readHorizontalOverflowType:(id)arg1;
+ (void)readHorizontalOverflowType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readTextBodyFromXmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 textBody:(id)arg2 drawingState:(id)arg3;
+ (void)readTextBodyProperties:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 textBodyProperties:(id)arg2 drawingState:(id)arg3;
+ (void)readVerticalOverflowType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readWrapType:(id)arg1 textBodyProperties:(id)arg2;
+ (id)stringWithTextAnchorType:(unsigned char)arg1;
+ (id)stringWithTextBodyFlowType:(unsigned char)arg1;
+ (id)stringWithTextBodyHorizontalOverflowType:(unsigned char)arg1;
+ (id)stringWithTextBodyVerticalOverflowType:(unsigned char)arg1;
+ (id)stringWithTextBodyWrapType:(unsigned char)arg1;
+ (void)writeTextBodyAutoFit:(id)arg1 to:(id)arg2;

@end

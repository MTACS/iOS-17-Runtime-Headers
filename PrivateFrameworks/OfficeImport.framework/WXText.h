
@interface WXText : NSObject

+ (id)addNewSectionTo:(id)arg1 state:(id)arg2;
+ (void)createChildren:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)createChildrenFromStream:(struct _xmlTextReader { }*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readFrom:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readFrom:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 state:(id)arg2;
+ (void)readFromParagraph:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readFromStream:(struct _xmlTextReader { }*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)readFromStream:(struct _xmlTextReader { }*)arg1 state:(id)arg2;
+ (void)readFromString:(id)arg1 to:(id)arg2;
+ (void)readFromTable:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)updateTextBoxIdsFromState:(id)arg1;

@end

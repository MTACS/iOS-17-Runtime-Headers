
@interface EXCell : NSObject

+ (double)dateTimeNumberFromXmlDateString:(id)arg1 state:(id)arg2;
+ (bool)edBoolFromXmlBoolString:(id)arg1;
+ (void)edCellFromXmlCellElement:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 edRowInfo:(struct EDRowInfo {}**)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5;
+ (int)edCellTypeFromXmlCellElement:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 isDate:(bool*)arg2 isFmlaStr:(bool*)arg3 stringIndex:(bool*)arg4;
+ (int)edErrorFromXmlErrorString:(id)arg1;
+ (id)xmlErrorStringValueEnumMap;

@end

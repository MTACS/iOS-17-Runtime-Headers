
@interface OAVFormula : NSObject

+ (struct OADFormulaArg { int x1; int x2; })readArgument:(id)arg1;
+ (id)readFormula:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (void)readFormulasFromManager:(id)arg1 toGeometry:(id)arg2;

@end


@interface PBParagraphProperties : NSObject

+ (int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)arg1;
+ (int)pptFontAlignWithOADTextFontAlign:(unsigned char)arg1;
+ (short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2;
+ (void)readAlign:(id)arg1 pptAlignmentType:(int)arg2;
+ (void)readParagraphProperties:(id)arg1 paragraphProperty:(void*)arg2 bulletStyle:(struct PptParaProperty9 { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; } x1; short x2; bool x3; struct PptTextAutoNumberScheme { unsigned int x_4_1_1 : 6; short x_4_1_2; } x4; }*)arg3 isMaster:(bool)arg4 state:(id)arg5;
+ (void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(void*)arg2 bulletStyle:(struct PptParaProperty9 { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; } x1; short x2; bool x3; struct PptTextAutoNumberScheme { unsigned int x_4_1_1 : 6; short x_4_1_2; } x4; }*)arg3 state:(id)arg4;

@end

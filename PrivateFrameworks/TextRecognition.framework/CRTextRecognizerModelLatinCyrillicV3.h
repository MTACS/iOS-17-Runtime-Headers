
@interface CRTextRecognizerModelLatinCyrillicV3 : CRTextSequenceRecognizerModelEspresso

+ (id)defaultURLOfModelInThisBundle;

- (struct TextBoxesOffsets { double x1; double x2; double x3; double x4; })wordBoxesOffsets;

@end


@interface CRTextRecognizerModelJapaneseV3 : CRTextSequenceRecognizerTopKModelEspresso

+ (id)defaultURLOfModelInThisBundle;

- (struct TextBoxesOffsets { double x1; double x2; double x3; double x4; })characterBoxesOffsets;
- (bool)supportCharacterBoxes;

@end

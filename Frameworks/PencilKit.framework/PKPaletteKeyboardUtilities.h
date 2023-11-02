
@interface PKPaletteKeyboardUtilities : NSObject

+ (id)combinedMenuFromKeyboardMenu:(id)arg1 withLanguageMenu:(id)arg2;
+ (bool)isReturnKeyEnabled;
+ (void)performReturn;
+ (id)textInputResponderForEditing;
+ (long long)textInputReturnKeyTypeForEditing;
+ (id)textInputUndoManagerForEditing;

@end

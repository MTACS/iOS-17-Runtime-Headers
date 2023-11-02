
@interface UIKBDerivedKeyboard : NSObject {
    bool  _addsSupplementaryControlKeys;
    NSString * _derivedKBStarPrefixName;
    struct CGSize { 
        double width; 
        double height; 
    }  _keyboardSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _keyboardSizeBasis;
}

@property (nonatomic) bool addsSupplementaryControlKeys;
@property (nonatomic, copy) NSString *derivedKBStarPrefixName;
@property (nonatomic) struct CGSize { double x1; double x2; } keyboardSize;
@property (nonatomic) struct CGSize { double x1; double x2; } keyboardSizeBasis;

- (void).cxx_destruct;
- (bool)addsSupplementaryControlKeys;
- (id)derivedKBStarPrefixName;
- (struct CGSize { double x1; double x2; })keyboardSize;
- (struct CGSize { double x1; double x2; })keyboardSizeBasis;
- (void)setAddsSupplementaryControlKeys:(bool)arg1;
- (void)setDerivedKBStarPrefixName:(id)arg1;
- (void)setKeyboardSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setKeyboardSizeBasis:(struct CGSize { double x1; double x2; })arg1;

@end


@interface TUIKeyplane : NSObject {
    NSMutableDictionary * _cache;
    long long  _currentVariantType;
    NSArray * _defaultKeysByRow;
    UIKBTree * _fullTree;
    long long  _indexOfLastRow;
    UIKBTree * _keylayout;
    long long  _layoutClass;
    long long  _layoutType;
    struct CGSize { 
        double width; 
        double height; 
    }  _leftSplitSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _rightSplitSize;
    NSArray * _variantKeysByRow;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic) long long currentVariantType;
@property (nonatomic, retain) NSArray *defaultKeysByRow;
@property (nonatomic, retain) UIKBTree *fullTree;
@property (nonatomic) long long indexOfLastRow;
@property (nonatomic, readonly) long long keyLayoutStyle;
@property (nonatomic, retain) UIKBTree *keylayout;
@property (nonatomic) long long layoutClass;
@property (nonatomic) long long layoutType;
@property (nonatomic) struct CGSize { double x1; double x2; } leftSplitSize;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) NSArray *orderedKeysByRow;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic) struct CGSize { double x1; double x2; } rightSplitSize;
@property (nonatomic, retain) NSArray *variantKeysByRow;

+ (double)baseHeightForLayoutClass:(long long)arg1 landscape:(bool)arg2;
+ (id)keyplaneFromKBTree:(id)arg1;
+ (id)keyplaneFromKBTree:(id)arg1 withType:(long long)arg2;
+ (long long)layoutClassFromKeyplaneName:(id)arg1;
+ (long long)layoutClassFromScreenDimensions:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })sizeBasisForLayoutClass:(long long)arg1;
+ (struct CGSize { double x1; double x2; })sizeFromScreenTraits:(id)arg1 layoutClass:(long long)arg2;

- (void).cxx_destruct;
- (id)cache;
- (id)createPreparedKeyFromTree:(id)arg1 withMultiplier:(double)arg2 type:(long long)arg3;
- (long long)currentVariantType;
- (id)defaultKeysByRow;
- (id)defaultKeysOrderedByRowForKeyplane:(id)arg1;
- (id)defaultRowSet;
- (id)description;
- (id)duplicateTreeForSplitMode:(id)arg1;
- (double)finalHeightForSplitKeyboard;
- (double)finalSplitSizeForRightSide:(bool)arg1;
- (id)fullTree;
- (bool)hasSimilarLayoutToKeyplane:(id)arg1;
- (double)heightMultiplierForRowNumber:(unsigned long long)arg1;
- (long long)indexOfLastRow;
- (id)init;
- (bool)isGridLayout;
- (long long)keyLayoutStyle;
- (id)keyRowFromTreeRow:(id)arg1 rowNumber:(unsigned long long)arg2 type:(long long)arg3;
- (long long)keyStyleForLayoutClass:(long long)arg1;
- (id)keylayout;
- (long long)layoutClass;
- (long long)layoutType;
- (long long)layoutTypeFromDisplayType:(int)arg1;
- (struct CGSize { double x1; double x2; })leftSplitSize;
- (double)multiplierForKey:(id)arg1 withProperties:(id)arg2;
- (id)name;
- (unsigned long long)numberOfKeys;
- (unsigned long long)numberOfRows;
- (id)orderedKeysByRow;
- (id)prefix;
- (struct CGSize { double x1; double x2; })rightSplitSize;
- (id)rowSetForType:(long long)arg1;
- (id)rowsForKeyboardType:(long long)arg1;
- (void)setCache:(id)arg1;
- (void)setCurrentVariantType:(long long)arg1;
- (void)setDefaultKeysByRow:(id)arg1;
- (void)setFullTree:(id)arg1;
- (void)setIndexOfLastRow:(long long)arg1;
- (void)setKeylayout:(id)arg1;
- (void)setLayoutClass:(long long)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setLeftSplitSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRightSplitSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVariantKeysByRow:(id)arg1;
- (bool)shouldDuplicateKey:(id)arg1 forRow:(id)arg2;
- (id)sortedKeysForKeyplane:(id)arg1;
- (id)stringFromKeyboardType:(long long)arg1;
- (id)stringFromLayoutClass:(long long)arg1;
- (id)stringFromLayoutStyle:(long long)arg1;
- (id)stringFromLayoutType:(long long)arg1;
- (void)updateKeyboardType:(long long)arg1;
- (id)variantKeysByRow;
- (bool)variantTypeIncludesSpaceBar:(long long)arg1;

@end

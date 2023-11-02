
@interface TUIKeyplaneRow : UIView {
    NSMutableArray * _constraintsForSplitRow;
    NSMutableArray * _constraintsForUnsplitRow;
    NSArray * _currentKeys;
    bool  _edgeToEdge;
    TUIKBKeyView * _extraSpaceBar;
    TUIKeyplaneView * _hostView;
    UILayoutGuide * _keySizingGuide;
    NSMutableArray * _keyViews;
    NSMutableArray * _layoutGuidesForRow;
    unsigned long long  _leftControlKeyCount;
    NSMutableArray * _letterKeyConstraints;
    unsigned long long  _rightControlKeyCount;
    long long  _rowNumberInKeyplane;
    long long  _rowType;
    UILayoutGuide * _splitSpacingGuide;
}

@property (nonatomic, retain) NSMutableArray *constraintsForSplitRow;
@property (nonatomic, retain) NSMutableArray *constraintsForUnsplitRow;
@property (nonatomic, retain) NSArray *currentKeys;
@property (nonatomic) bool edgeToEdge;
@property (nonatomic, retain) TUIKBKeyView *extraSpaceBar;
@property (nonatomic) TUIKeyplaneView *hostView;
@property (nonatomic, retain) UILayoutGuide *keySizingGuide;
@property (nonatomic, retain) NSMutableArray *keyViews;
@property (nonatomic, retain) NSMutableArray *layoutGuidesForRow;
@property (nonatomic) unsigned long long leftControlKeyCount;
@property (nonatomic, retain) NSMutableArray *letterKeyConstraints;
@property (nonatomic) unsigned long long rightControlKeyCount;
@property (nonatomic) long long rowNumberInKeyplane;
@property (nonatomic) long long rowType;
@property (nonatomic, retain) UILayoutGuide *splitSpacingGuide;

+ (id)emptyRowForKeyplane:(id)arg1 rowNumber:(long long)arg2;
+ (id)rowForKeyplane:(id)arg1 keys:(id)arg2 letterKeyGuide:(id)arg3;

- (void).cxx_destruct;
- (id)constraintsForSplitRow;
- (id)constraintsForStringKeys:(id)arg1 inRowGuide:(id)arg2 matchingSizingGuide:(id)arg3 splitIndex:(long long)arg4;
- (id)constraintsForUnsplitRow;
- (id)currentKeys;
- (id)description;
- (bool)edgeToEdge;
- (id)extraSpaceBar;
- (id)hostView;
- (id)init;
- (bool)keyIsControlType:(id)arg1;
- (bool)keyIsSpaceType:(id)arg1;
- (bool)keyIsStringType:(id)arg1;
- (id)keySizingGuide;
- (id)keyViews;
- (id)layoutGuidesForRow;
- (void)layoutRowWithKeys:(id)arg1 guide:(id)arg2 type:(long long)arg3;
- (unsigned long long)leftControlKeyCount;
- (id)letterKeyConstraints;
- (void)resetRow;
- (unsigned long long)rightControlKeyCount;
- (long long)rowNumberInKeyplane;
- (long long)rowType;
- (void)setConstraintsForSplitRow:(id)arg1;
- (void)setConstraintsForUnsplitRow:(id)arg1;
- (void)setCurrentKeys:(id)arg1;
- (void)setEdgeToEdge:(bool)arg1;
- (void)setExtraSpaceBar:(id)arg1;
- (void)setHostView:(id)arg1;
- (void)setKeySizingGuide:(id)arg1;
- (void)setKeyViews:(id)arg1;
- (void)setLayoutGuidesForRow:(id)arg1;
- (void)setLeftControlKeyCount:(unsigned long long)arg1;
- (void)setLetterKeyConstraints:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setRightControlKeyCount:(unsigned long long)arg1;
- (void)setRowNumberInKeyplane:(long long)arg1;
- (void)setRowType:(long long)arg1;
- (void)setSplitSpacingGuide:(id)arg1;
- (id)splitLayoutGuide;
- (id)splitSpacingGuide;
- (void)toggleConstraintsForSplit:(bool)arg1;
- (void)updateKeysForTransition:(bool)arg1;
- (void)updateKeysInRowWithData:(id)arg1;
- (void)updateKeysInRowWithStyle:(long long)arg1 factory:(id)arg2;

@end


@interface TLKSelectableGridView : TLKView <NUIContainerViewDelegate> {
    NSMutableArray * _buttons;
    <TLKSelectableGridViewDelegate> * _delegate;
    long long  _selectedIndex;
    NSArray * _tuples;
}

@property (nonatomic, retain) NSMutableArray *buttons;
@property (nonatomic, retain) NUIContainerGridView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property <TLKSelectableGridViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tuples;

+ (unsigned long long)idealNumberOfColumnsForTitles:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 containerView:(id)arg3;
+ (unsigned long long)maxColumns;

- (void).cxx_destruct;
- (id)_createButton;
- (id)arrangedEntrySubviews;
- (id)buttons;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)delegate;
- (void)observedPropertiesChanged;
- (void)selectableGridButtonPressed:(id)arg1;
- (long long)selectedIndex;
- (void)setButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setTuples:(id)arg1;
- (id)setupContentView;
- (id)tuples;

@end

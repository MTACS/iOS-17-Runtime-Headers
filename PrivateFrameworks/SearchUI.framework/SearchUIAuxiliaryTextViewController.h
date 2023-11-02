
@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController {
    bool  _shouldCenter;
}

@property (nonatomic) bool shouldCenter;
@property (retain) TLKAuxilliaryTextView *view;

+ (bool)supportsRowModel:(id)arg1;

- (void)setShouldCenter:(bool)arg1;
- (id)setupView;
- (bool)shouldCenter;
- (bool)shouldVerticallyCenter;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end

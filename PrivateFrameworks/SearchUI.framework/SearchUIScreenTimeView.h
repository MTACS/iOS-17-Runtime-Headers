
@interface SearchUIScreenTimeView : NUIContainerStackView {
    TLKLabel * _label;
}

@property (nonatomic, retain) TLKLabel *label;

- (void).cxx_destruct;
- (id)init;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)updateWithRowModel:(id)arg1;

@end


@interface TLKSectionHeaderView : TLKView {
    TLKProminenceView * _backgroundView;
    TLKMultilineText * _headerText;
    TLKLabel * _headerTextLabel;
}

@property (nonatomic, retain) TLKProminenceView *backgroundView;
@property (nonatomic, retain) TLKMultilineText *headerText;
@property (nonatomic, retain) TLKLabel *headerTextLabel;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)headerLabelText;
- (id)headerText;
- (id)headerTextLabel;
- (void)observedPropertiesChanged;
- (void)setBackgroundView:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderTextLabel:(id)arg1;
- (id)setupContentView;
- (bool)usesDefaultLayoutMargins;

@end

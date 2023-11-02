
@protocol TLKTextAreaViewTesting <TLKTitleContainerTestingProtocol>

@required

- (NSMutableArray *)detailsFields;
- (NSArray *)detailsStrings;
- (TLKTextButton *)footnoteButton;
- (NUIContainerStackView *)footnoteContainer;
- (TLKStackView *)footnoteLabel;
- (NSString *)footnoteLabelString;
- (TLKTitleContainerView *)titleContainer;

@end

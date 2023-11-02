
@interface _UISearchTextFieldVisualStyle : NSObject <_UIVisualStyleProviding> {
    UISearchTextField * _searchTextField;
}

@property (nonatomic, readonly) double backgroundCornerRadius;
@property (nonatomic, readonly) NSNumber *clearButtonInnerInset;
@property (nonatomic, readonly) NSNumber *clearButtonOuterInset;
@property (nonatomic, readonly) double defaultHeight;
@property (nonatomic, readonly) UIColor *defaultLeftViewTintColor;
@property (nonatomic, readonly) UIFont *dynamicSearchFieldFont;
@property (nonatomic, readonly) UIColor *filledLeftViewTintColor;
@property (nonatomic, readonly) double leftViewInset;
@property (nonatomic, readonly) double leftViewInsetAddition;
@property (nonatomic, readonly) double leftViewToPlaceholderCenteredMargin;
@property (nonatomic, readonly) double rightViewInset;
@property (nonatomic, readonly) double searchBookmarkButtonOffset;
@property (nonatomic, readonly) double searchResultsListButtonOffset;
@property (nonatomic, readonly) UISearchTextField *searchTextField;
@property (nonatomic, readonly) double searchTextResultsPadding;
@property (nonatomic, readonly) double textLeadingInset;
@property (nonatomic, readonly) double textLeftInsetLegacy;
@property (nonatomic, readonly) double textRightInset;
@property (nonatomic, readonly) bool usesCustomIntrinsicSize;

- (void).cxx_destruct;
- (double)backgroundCornerRadius;
- (id)clearButtonInnerInset;
- (id)clearButtonOuterInset;
- (double)defaultHeight;
- (double)defaultHeightForBarMetrics:(long long)arg1;
- (id)defaultLeftViewTintColor;
- (id)dynamicSearchFieldFont;
- (id)filledLeftViewTintColor;
- (id)initWithInstance:(id)arg1;
- (double)leftViewInset;
- (double)leftViewInsetAddition;
- (double)leftViewToPlaceholderCenteredMargin;
- (double)rightViewInset;
- (double)searchBookmarkButtonOffset;
- (double)searchResultsListButtonOffset;
- (id)searchTextField;
- (double)searchTextResultsPadding;
- (double)textLeadingInset;
- (double)textLeftInsetLegacy;
- (double)textRightInset;
- (bool)usesCustomIntrinsicSize;

@end

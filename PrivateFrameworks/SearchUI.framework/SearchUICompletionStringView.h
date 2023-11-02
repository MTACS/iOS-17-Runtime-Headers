
@interface SearchUICompletionStringView : NUIContainerStackView <TLKImageViewDelegate> {
    SFCardSection * _cardSection;
    SearchUICompletion * _completion;
    bool  _focusIsOnFirstResult;
    SearchUIImageView * _imageView;
    SearchUIMaskedLabelsStackView * _labelsStackView;
    SFSearchResult * _result;
    SearchUICompletionStringModel * _searchFieldModel;
    UIColor * _selectionHighlightColor;
}

@property (retain) SFCardSection *cardSection;
@property (retain) SearchUICompletion *completion;
@property (readonly) bool completionResultIsPotentiallyPunchout;
@property (readonly) NSString *completionText;
@property (readonly) NSString *copyableString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool focusIsOnFirstResult;
@property (nonatomic, retain) UIFont *fontForCompletionLabel;
@property (readonly) bool hasContent;
@property (readonly) bool hasPrefix;
@property (readonly) unsigned long long hash;
@property (retain) SearchUIImageView *imageView;
@property (retain) SearchUIMaskedLabelsStackView *labelsStackView;
@property (retain) SFSearchResult *result;
@property (nonatomic, retain) SearchUICompletionStringModel *searchFieldModel;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColorForCompletionLabel;
@property (readonly) double trailingPaddingForFieldEditor;

+ (bool)supportsImages;

- (void).cxx_destruct;
- (id)bridgeLabel;
- (id)cardSection;
- (id)completion;
- (id)completionLabel;
- (bool)completionResultIsPotentiallyPunchout;
- (id)completionText;
- (id)copyableString;
- (void)didFailToLoadImage;
- (void)didUpdateWithImage:(id)arg1;
- (id)extensionLabel;
- (bool)focusIsOnFirstResult;
- (id)fontForCompletionLabel;
- (bool)hasContent;
- (bool)hasPrefix;
- (id)imageView;
- (id)init;
- (id)labelsStackView;
- (id)result;
- (id)searchFieldModel;
- (id)selectionHighlightColor;
- (void)setCardSection:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setFocusIsOnFirstResult:(bool)arg1;
- (void)setFontForCompletionLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabelsStackView:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSearchFieldModel:(id)arg1;
- (void)setSelectionHighlightColor:(id)arg1;
- (void)setTextColorForCompletionLabel:(id)arg1;
- (id)textColorForCompletionLabel;
- (double)trailingPaddingForFieldEditor;
- (void)updateFields;
- (void)updateLabelStackVisibility;
- (void)updateWithResult:(id)arg1 cardSection:(id)arg2 focusIsOnFirstResult:(bool)arg3;

@end

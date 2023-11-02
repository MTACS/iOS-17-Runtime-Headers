
@interface CKTranscriptSharingSuggestion : NSObject <SGSuggestion, SGSuggestionCategory> {
    <CKTranscriptSharingSuggestionDelegate> * _delegate;
    long long  _state;
    <SGSuggestionDelegate> * suggestionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKTranscriptSharingSuggestionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;
@property (readonly) Class superclass;

+ (id)bannerWithState:(long long)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSuggestionDelegate:(id)arg1;
- (long long)state;
- (long long)suggestionActionButtonType;
- (id)suggestionCategory;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionDelegate;
- (id)suggestionDismissAction;
- (id)suggestionImageSGView;
- (id)suggestionPrimaryAction;
- (bool)suggestionProminentActionButton;
- (id)suggestionSubtitle;
- (id)suggestionTitle;

@end

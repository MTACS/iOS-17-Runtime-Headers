
@interface ICTK2TextAttachmentViewProvider : NSTextAttachmentViewProvider {
    ICSearchResultRegexMatchFinder * _highlightPatternRegexFinder;
    <NSTextLocation> * _updatedLocationForRecycledViewProvider;
}

@property (nonatomic, retain) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (nonatomic, retain) <NSTextLocation> *updatedLocationForRecycledViewProvider;

- (void).cxx_destruct;
- (id)highlightPatternRegexFinder;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 textLayoutManager:(id)arg3 location:(id)arg4;
- (void)loadView;
- (id)location;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setUpdatedLocationForRecycledViewProvider:(id)arg1;
- (id)updatedLocationForRecycledViewProvider;

@end

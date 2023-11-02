
@interface CKConversationSearchResultEmbeddedCell : CKConversationListStandardCell <CKConversationSearchCellProtocol> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKConversationSearchCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (readonly) Class superclass;

+ (id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6;

- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2;
- (bool)lastMessageIsTypingIndicator;
- (void)layoutSubviews;
- (double)leadingLayoutMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)prepareForReuse;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end

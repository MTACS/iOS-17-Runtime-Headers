
@interface SearchUICombinedCardSectionsView : NUIContainerStackView {
    NSMutableDictionary * _cardSectionsMapping;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    bool  _hasAttributionFooter;
    SearchUICombinedCardSectionRowModel * _rowModel;
    NSMutableArray * _separatorViews;
    NSMutableArray * _uncacheableViews;
}

@property (nonatomic, retain) NSMutableDictionary *cardSectionsMapping;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property bool hasAttributionFooter;
@property (nonatomic, retain) SearchUICombinedCardSectionRowModel *rowModel;
@property (nonatomic, retain) NSMutableArray *separatorViews;
@property (nonatomic, retain) NSMutableArray *uncacheableViews;

- (void).cxx_destruct;
- (id)cardSectionsMapping;
- (id)feedbackDelegate;
- (bool)hasAttributionFooter;
- (id)init;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)layoutAllSeparators;
- (void)layoutSubviews;
- (id)rowModel;
- (id)separatorViews;
- (void)setCardSectionsMapping:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setHasAttributionFooter:(bool)arg1;
- (void)setRowModel:(id)arg1;
- (void)setSeparatorViews:(id)arg1;
- (void)setUncacheableViews:(id)arg1;
- (id)uncacheableViews;

@end

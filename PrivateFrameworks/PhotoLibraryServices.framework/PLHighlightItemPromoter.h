
@interface PLHighlightItemPromoter : NSObject {
    <PLHighlightItemPromoterRule> * _rule;
}

@property (nonatomic, readonly) <PLHighlightItemPromoterRule> *rule;

- (void).cxx_destruct;
- (id)initWithRule:(id)arg1;
- (void)processHighlightItemsInHighlightItemList:(id)arg1 currentlyPromotedHighlightItems:(id)arg2 withSharingConsideration:(long long)arg3 resultBlock:(id /* block */)arg4;
- (id)rule;

@end

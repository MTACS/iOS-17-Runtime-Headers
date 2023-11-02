
@interface HREActionSetRecommendationItem : HFItem {
    HRERecommendationItem * _recommendationItem;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
}

@property (nonatomic, readonly) HREActionSetRecommendation *recommendation;
@property (nonatomic, readonly) HRERecommendationItem *recommendationItem;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *serviceLikeItem;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithRecommendationItem:(id)arg1;
- (id)recommendation;
- (id)recommendationItem;
- (id)serviceLikeItem;
- (void)setServiceLikeItem:(id)arg1;

@end

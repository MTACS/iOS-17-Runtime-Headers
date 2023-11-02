
@interface HRERecommendationItem : HFItem <HUTriggerLikeItem> {
    unsigned long long  _accessoryCountType;
    HRERecommendation * _recommendation;
    bool  _selected;
}

@property (nonatomic) unsigned long long accessoryCountType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) HRERecommendation *recommendation;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMTrigger *trigger;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (unsigned long long)accessoryCountType;
- (id)initWithRecommendation:(id)arg1;
- (bool)isSelected;
- (id)recommendation;
- (void)setAccessoryCountType:(unsigned long long)arg1;
- (void)setRecommendation:(id)arg1;
- (void)setSelected:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)identifier;
- (id)trigger;

@end

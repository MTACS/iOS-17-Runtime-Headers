
@interface UISDShareSheetSessionConfiguration : NSObject <NSSecureCoding> {
    NSArray * _actionProxies;
    NSNumber * _nearbyCountBadge;
    NSNumber * _nearbyCountSlotID;
    NSArray * _peopleProxies;
    NSArray * _peopleSuggestions;
    bool  _reloadData;
    NSArray * _restrictedActivityTypes;
    NSArray * _shareProxies;
    bool  _shouldBlockPresentation;
    bool  _wantsAnimation;
}

@property (nonatomic, retain) NSArray *actionProxies;
@property (nonatomic, retain) NSNumber *nearbyCountBadge;
@property (nonatomic, retain) NSNumber *nearbyCountSlotID;
@property (nonatomic, retain) NSArray *peopleProxies;
@property (nonatomic, copy) NSArray *peopleSuggestions;
@property (nonatomic) bool reloadData;
@property (nonatomic, copy) NSArray *restrictedActivityTypes;
@property (nonatomic, retain) NSArray *shareProxies;
@property (nonatomic) bool shouldBlockPresentation;
@property (nonatomic) bool wantsAnimation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionProxies;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nearbyCountBadge;
- (id)nearbyCountSlotID;
- (id)peopleProxies;
- (id)peopleSuggestions;
- (bool)reloadData;
- (id)restrictedActivityTypes;
- (void)setActionProxies:(id)arg1;
- (void)setNearbyCountBadge:(id)arg1;
- (void)setNearbyCountSlotID:(id)arg1;
- (void)setPeopleProxies:(id)arg1;
- (void)setPeopleSuggestions:(id)arg1;
- (void)setReloadData:(bool)arg1;
- (void)setRestrictedActivityTypes:(id)arg1;
- (void)setShareProxies:(id)arg1;
- (void)setShouldBlockPresentation:(bool)arg1;
- (void)setWantsAnimation:(bool)arg1;
- (id)shareProxies;
- (bool)shouldBlockPresentation;
- (bool)wantsAnimation;

@end

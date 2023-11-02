
@interface HUPresenceActivationOptionState : NSObject {
    HUPresenceActivationOptionItem * _activationOptionItem;
    bool  _expanded;
    HFTransformItemProvider * _userOptionItemProvider;
}

@property (nonatomic, readonly) unsigned long long activationGranularity;
@property (nonatomic, readonly) HUPresenceActivationOptionItem *activationOptionItem;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) HFTransformItemProvider *userOptionItemProvider;

- (void).cxx_destruct;
- (unsigned long long)activationGranularity;
- (id)activationOptionItem;
- (id)init;
- (id)initWithUserOptionItemProvider:(id)arg1 activationOptionItem:(id)arg2;
- (bool)isExpanded;
- (bool)isSelected;
- (void)setExpanded:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (id)userOptionItemProvider;

@end

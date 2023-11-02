
@interface PKPassTileState : NSObject <NSSecureCoding> {
    NSArray * _actionDictionaries;
    PKPassTileState * _actionState;
    NSArray * _actions;
    bool  _enabled;
    PKPassTileImage * _icon;
    PKPassTileStateMetadata * _metadata;
    bool  _resolved;
    bool  _selected;
    long long  _type;
}

@property (nonatomic, readonly) PKPaymentPassAction *action;
@property (nonatomic, copy) NSArray *actionDictionaries;
@property (nonatomic, retain) PKPassTileState *actionState;
@property (nonatomic, readonly) NSArray *actions;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) PKPassTileImage *icon;
@property (nonatomic, retain) PKPassTileStateMetadata *metadata;
@property (getter=isResolved, nonatomic, readonly) bool resolved;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) PKPassTileStateCheckIn *stateTypeCheckIn;
@property (nonatomic, readonly) PKPassTileStateDefault *stateTypeDefault;
@property (nonatomic, readonly) long long type;

+ (id)_createForDictionary:(id)arg1 withTileType:(long long)arg2;
+ (id)_createWithType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_setupWithDictionary:(id)arg1;
- (id)action;
- (id)actionDictionaries;
- (id)actionState;
- (id)actions;
- (id)createResolvedStateWithBundle:(id)arg1 privateBundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqualToUnresolvedState:(id)arg1;
- (bool)isResolved;
- (bool)isSelected;
- (id)metadata;
- (void)setActionDictionaries:(id)arg1;
- (void)setActionState:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSelected:(bool)arg1;
- (id)stateTypeCheckIn;
- (id)stateTypeDefault;
- (long long)type;

@end

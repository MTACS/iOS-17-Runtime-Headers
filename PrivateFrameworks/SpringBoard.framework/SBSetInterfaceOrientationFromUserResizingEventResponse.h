
@interface SBSetInterfaceOrientationFromUserResizingEventResponse : SBSwitcherModifierEventResponse {
    long long  _desiredOrientation;
    SBDisplayItem * _displayItem;
}

@property (nonatomic, readonly) long long desiredOrientation;
@property (nonatomic, readonly) SBDisplayItem *displayItem;

- (void).cxx_destruct;
- (long long)desiredOrientation;
- (id)displayItem;
- (id)initWithDisplayItem:(id)arg1 desiredContentOrientation:(long long)arg2;
- (long long)type;

@end

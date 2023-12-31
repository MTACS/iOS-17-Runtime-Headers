
@interface STTimeAllowancesViewModel : NSObject {
    bool  _allAllowancesEnabled;
    NSDictionary * _allowancesByIdentifier;
    STAlwaysAllowList * _alwaysAllowList;
    STDeviceBedtime * _bedtime;
    NSDictionary * _pendingAskForTimeByIdentifier;
}

@property (nonatomic) bool allAllowancesEnabled;
@property (nonatomic, copy) NSDictionary *allowancesByIdentifier;
@property (nonatomic, copy) STAlwaysAllowList *alwaysAllowList;
@property (nonatomic, copy) STDeviceBedtime *bedtime;
@property (nonatomic, copy) NSDictionary *pendingAskForTimeByIdentifier;

- (void).cxx_destruct;
- (bool)allAllowancesEnabled;
- (id)allowancesByIdentifier;
- (id)alwaysAllowList;
- (id)bedtime;
- (id)init;
- (id)pendingAskForTimeByIdentifier;
- (void)setAllAllowancesEnabled:(bool)arg1;
- (void)setAllowancesByIdentifier:(id)arg1;
- (void)setAlwaysAllowList:(id)arg1;
- (void)setBedtime:(id)arg1;
- (void)setPendingAskForTimeByIdentifier:(id)arg1;

@end

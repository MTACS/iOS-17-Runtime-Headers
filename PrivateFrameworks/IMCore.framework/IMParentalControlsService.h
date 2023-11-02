
@interface IMParentalControlsService : NSObject {
    NSSet * _allowlist;
    bool  _disableService;
    bool  _forceAllowlist;
    NSString * _name;
}

@property (retain) NSSet *allowlist;
@property bool disableService;
@property bool forceAllowlist;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (id)allowlist;
- (void)dealloc;
- (bool)disableService;
- (bool)forceAllowlist;
- (id)name;
- (void)setAllowlist:(id)arg1;
- (void)setDisableService:(bool)arg1;
- (void)setForceAllowlist:(bool)arg1;
- (void)setName:(id)arg1;

@end

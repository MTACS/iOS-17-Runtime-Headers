
@interface ATXInfoTimelineDonationClient : NSObject {
    _PASXPCClientHelper * _xpcClientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)timelineDidReloadForWidget:(id)arg1 parentApp:(id)arg2 withEntries:(id)arg3 completion:(id /* block */)arg4;

@end


@interface NPHCountryCodeCompanionReplication : NSObject {
    NPSManager * _npsManager;
}

- (void).cxx_destruct;
- (void)_updateActiveCountryCode;
- (void)_updateAndBroadcastCodeWithKey:(id)arg1 usingFunction:(int (*)arg2;
- (void)_updateHomeCountryCode;
- (void)_updateNetworkCountryCode;
- (void)dealloc;
- (id)init;

@end

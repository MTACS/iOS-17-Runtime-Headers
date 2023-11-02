
@interface WLKStoredConfigurationManager : NSObject {
    WLKStoredConfiguration * _storedConfiguration;
}

@property (nonatomic, retain) WLKStoredConfiguration *storedConfiguration;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleAccountChange:(id)arg1;
- (void)_handleLibraryChange:(id)arg1;
- (void)_invalidateWithReason:(id)arg1;
- (void)_setStoredConfiguration:(id)arg1;
- (void)_updateConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setStoredConfiguration:(id)arg1;
- (id)storedConfiguration;

@end

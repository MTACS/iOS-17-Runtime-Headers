
@interface APCarPlayPreferences : NSObject <CRCarPlayPreferencesDelegate> {
    <APCarPlayPreferencesDelegate> * _delegate;
    CRCarPlayPreferences * _preferences;
}

@property (getter=isCarPlayEnabled, nonatomic, readonly) bool carPlayEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APCarPlayPreferencesDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)delegate;
- (void)handleCarPlayAllowedDidChange;
- (id)init;
- (bool)isCarPlayEnabled;
- (void)setDelegate:(id)arg1;

@end

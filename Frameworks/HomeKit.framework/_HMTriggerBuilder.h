
@interface _HMTriggerBuilder : _HMAutomationBuilder <HMTriggerBuilderInternal> {
    NSMutableArray * _actionSets;
    bool  _enabled;
    NSString * _name;
    bool  _nameIsConfigured;
    HMTriggerPolicy * _policy;
}

@property (nonatomic, copy) NSArray *actionSets;
@property (nonatomic, readonly, copy) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool nameIsConfigured;
@property (nonatomic, retain) HMTriggerPolicy *policy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMActionSetBuilder *triggerOwnedActionSet;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (void)initialize;

- (void).cxx_destruct;
- (id)actionSets;
- (void)addActionSet:(id)arg1;
- (void)addActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addActionSetOfType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addActionSetWithCompletionHandler:(id /* block */)arg1;
- (Class)class;
- (id)configuredName;
- (id)creator;
- (id)creatorDevice;
- (void)enable:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithContext:(id)arg1 home:(id)arg2;
- (bool)isEnabled;
- (bool)isKindOfClass:(Class)arg1;
- (id)lastFireDate;
- (id)name;
- (bool)nameIsConfigured;
- (id)policy;
- (void)removeActionSet:(id)arg1;
- (void)removeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removePolicy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActionSets:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setName:(id)arg1 isConfigured:(bool)arg2;
- (void)setPolicy:(id)arg1;
- (id)triggerOwnedActionSet;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 configuredName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updatePolicy:(id)arg1 completionHandler:(id /* block */)arg2;

@end

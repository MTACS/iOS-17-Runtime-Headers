
@interface _HMActionSetBuilder : _HMAutomationBuilder <HMActionSetBuilderInternal> {
    NSMutableArray * _actions;
    HMApplicationData * _applicationData;
    NSString * _name;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSString *actionSetType;
@property (nonatomic, copy) NSSet *actions;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (void)initialize;

- (void).cxx_destruct;
- (id)actionSetType;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)applicationData;
- (Class)class;
- (id)copyAsBuilder;
- (id)initWithActionSet:(id)arg1;
- (id)initWithType:(id)arg1 context:(id)arg2 home:(id)arg3;
- (bool)isEmpty;
- (bool)isExecuting;
- (id)lastExecutionDate;
- (id)name;
- (void)removeAction:(id)arg1;
- (void)removeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActions:(id)arg1;
- (void)setName:(id)arg1;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;

@end

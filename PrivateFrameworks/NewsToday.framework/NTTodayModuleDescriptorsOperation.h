
@interface NTTodayModuleDescriptorsOperation : FCOperation {
    <FCContentContext> * _contentContext;
    NSArray * _contentRequests;
    id /* block */  _descriptorsCompletion;
    <FCReadablePrivateDataStorage> * _privateDataStorage;
    bool  _requireRefreshedAppConfig;
}

@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, copy) NSArray *contentRequests;
@property (nonatomic, copy) id /* block */ descriptorsCompletion;
@property (nonatomic, retain) <FCReadablePrivateDataStorage> *privateDataStorage;
@property (nonatomic) bool requireRefreshedAppConfig;

- (void).cxx_destruct;
- (id)contentContext;
- (id)contentRequests;
- (id /* block */)descriptorsCompletion;
- (id)init;
- (id)privateDataStorage;
- (bool)requireRefreshedAppConfig;
- (void)setContentContext:(id)arg1;
- (void)setContentRequests:(id)arg1;
- (void)setDescriptorsCompletion:(id /* block */)arg1;
- (void)setPrivateDataStorage:(id)arg1;
- (void)setRequireRefreshedAppConfig:(bool)arg1;

@end

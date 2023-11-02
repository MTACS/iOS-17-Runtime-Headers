
@interface CHCallInteractionManager : NSObject <CHCallInteractionDataSourceDelegate, CHCallInteractionManager> {
    <CHCallInteractionDataSource> * _dataSource;
    CHDelegateController * _delegateController;
}

@property (nonatomic, readonly) <CHCallInteractionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) CHDelegateController *delegateController;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)callInteractionsDidChangeForDataSource:(id)arg1;
- (id)dataSource;
- (id)delegateController;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)removeDelegate:(id)arg1;

@end

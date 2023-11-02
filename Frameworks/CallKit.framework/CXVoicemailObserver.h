
@interface CXVoicemailObserver : NSObject <CXVoicemailObserverDataSourceDelegate> {
    <CXVoicemailObserverDataSource> * _dataSource;
    <CXVoicemailObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <CXVoicemailObserverDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXVoicemailObserverDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *voicemails;

- (void).cxx_destruct;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (id)dataSource;
- (void)dataSourceVoicemailsChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)initWithDataSource:(id)arg1 queue:(id)arg2;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (id)voicemails;

@end

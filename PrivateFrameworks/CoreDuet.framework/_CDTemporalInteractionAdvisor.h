
@interface _CDTemporalInteractionAdvisor : NSObject {
    NSMutableDictionary * _consumerToModelMap;
    NSObject<OS_dispatch_queue> * _dataQueue;
    int  _settingsNotifyToken;
    _CDInteractionStore * _store;
}

@property (nonatomic, retain) NSMutableDictionary *consumerToModelMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataQueue;
@property int settingsNotifyToken;
@property (retain) _CDInteractionStore *store;

- (void).cxx_destruct;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)consumerToModelMap;
- (id)dataQueue;
- (void)dealloc;
- (id)initWithStore:(id)arg1;
- (id)rankContacts:(id)arg1 usingSettings:(id)arg2;
- (id)rankerForDate:(id)arg1 settings:(id)arg2;
- (void)setConsumerToModelMap:(id)arg1;
- (void)setDataQueue:(id)arg1;
- (void)setSettingsNotifyToken:(int)arg1;
- (void)setStore:(id)arg1;
- (int)settingsNotifyToken;
- (id)store;
- (void)updateConsumerModel;

@end

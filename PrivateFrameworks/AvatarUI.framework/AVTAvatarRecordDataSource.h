
@interface AVTAvatarRecordDataSource : NSObject <AVTAvatarRecordDataSource> {
    AVTAvatarStore * _avatarStore;
    AVTAvatarStore * _observableWrappedAvatarStore;
    AVTPAvatarRecordDataSource * _persistenceAvatarRecordDataSource;
}

@property (nonatomic, retain) AVTAvatarStore *avatarStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVTAvatarStore *observableWrappedAvatarStore;
@property (nonatomic, retain) AVTPAvatarRecordDataSource *persistenceAvatarRecordDataSource;
@property (readonly) Class superclass;

+ (id)defaultUIDataSourceWithDomainIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addPriorityObserver:(id)arg1;
- (id)avatarStore;
- (void)flushRecordsForEnteringBackground;
- (unsigned long long)indexOfRecordPassingTest:(id /* block */)arg1;
- (id)indexSetForEditableRecords;
- (id)indexesOfRecordsPassingTest:(id /* block */)arg1;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2;
- (id)initWithRecordStore:(id)arg1 fetchRequest:(id)arg2 environment:(id)arg3;
- (id)internalRecordStore;
- (unsigned long long)numberOfRecords;
- (id)observableWrappedAvatarStore;
- (id)persistenceAvatarRecordDataSource;
- (id)recordAtIndex:(unsigned long long)arg1;
- (id)recordStore;
- (void)removeObserver:(id)arg1;
- (void)setAvatarStore:(id)arg1;
- (void)setObservableWrappedAvatarStore:(id)arg1;
- (void)setPersistenceAvatarRecordDataSource:(id)arg1;

@end

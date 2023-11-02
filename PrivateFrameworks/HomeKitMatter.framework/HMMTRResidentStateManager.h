
@interface HMMTRResidentStateManager : HMFObject <HMFLogging> {
    bool  _currentDevicePrimaryResident;
    <HMMTRResidentStateManagerDataSource> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (getter=isCurrentDevicePrimaryResident, nonatomic) bool currentDevicePrimaryResident;
@property <HMMTRResidentStateManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (void)handleResidentStateUpdated;
- (id)init;
- (bool)isCurrentDevicePrimaryResident;
- (void)setCurrentDevicePrimaryResident:(bool)arg1;
- (void)setDataSource:(id)arg1;

@end

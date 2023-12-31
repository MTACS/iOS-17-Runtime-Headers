
@interface _CNDonationManagedDuplicatesLogger : NSObject <CNDonationManagedDuplicatesLogger> {
    NSObject<OS_os_log> * _log_t;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log_t;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didFailRefreshingDuplicates:(id)arg1;
- (void)didRefreshDuplicates;
- (void)didSkipRefreshDuplicates:(id)arg1;
- (id)init;
- (id)log_t;
- (void)managedDuplicateServiceCheckingIn;
- (void)managedDuplicateServiceCriteria:(id)arg1;
- (void)willRefreshDuplicates;

@end

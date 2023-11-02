
@interface TCSIDSIDStatusController : NSObject <IDSBatchIDQueryControllerDelegate> {
    <TCSIDSIDStatusControllerDelegate> * _delegate;
    NSMutableDictionary * _destinationToStatus;
    NSArray * _destinations;
    <TUIDSLookup> * _item;
    IDSBatchIDQueryController * _queryController;
    double  _timeout;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TCSIDSIDStatusControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *destinationToStatus;
@property (nonatomic, readonly) NSArray *destinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <TUIDSLookup> *item;
@property (nonatomic, retain) IDSBatchIDQueryController *queryController;
@property (nonatomic, readonly) NSNumber *status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tinCanHandle;

+ (id)stringForDestinationToStatus:(id)arg1;

- (void).cxx_destruct;
- (void)_statusQueryTimedOut;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)destinationToStatus;
- (id)destinations;
- (void)execute;
- (id)initWithItem:(id)arg1 delegate:(id)arg2 timeout:(double)arg3;
- (id)item;
- (id)queryController;
- (void)setQueryController:(id)arg1;
- (id)status;
- (id)tinCanHandle;

@end

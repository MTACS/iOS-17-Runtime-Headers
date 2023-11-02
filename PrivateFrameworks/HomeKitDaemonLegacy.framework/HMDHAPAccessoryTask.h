
@interface HMDHAPAccessoryTask : NSObject <HMDHAPAccessoryTask> {
    id /* block */  _completion;
    HMDHAPAccessoryTaskContext * _context;
    NSDate * _executionTime;
    NSMapTable * _requestToResponseMap;
    NSArray * _requests;
}

@property (readonly) NSArray *characteristicResponses;
@property (readonly) unsigned long long completedRequestsCount;
@property (readonly) id /* block */ completion;
@property (readonly) HMDHAPAccessoryTaskContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *executionTime;
@property (readonly) double executionTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *identifier;
@property (readonly) NSMapTable *requestToResponseMap;
@property (readonly) NSArray *requests;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_updatedCompletion:(id /* block */)arg1;
- (id)activity;
- (void)addCharacteristicResponses:(id)arg1;
- (bool)allResponsesReceived;
- (id)characteristicResponses;
- (unsigned long long)completedRequestsCount;
- (id /* block */)completion;
- (id)context;
- (id)debugDescription;
- (id)description;
- (void)execute;
- (id)executionTime;
- (double)executionTimeInterval;
- (void)finishTaskWithCharacteristicResponses:(id)arg1 completion:(id /* block */)arg2;
- (id)identifier;
- (id)initWithContext:(id)arg1 requests:(id)arg2 completion:(id /* block */)arg3;
- (id)logEventsFromAccessoryRequestMap:(id)arg1 accessoryList:(id)arg2;
- (id)operationName;
- (id)requestIdentifier;
- (id)requestToResponseMap;
- (id)requests;
- (void)sendCharacteristicNotificationsForCompletedTask:(id)arg1 completion:(id /* block */)arg2;
- (void)sendCharacteristicNotificationsForTaskInProgress:(id)arg1 completion:(id /* block */)arg2;
- (void)setExecutionTime:(id)arg1;
- (unsigned long long)sourceType;
- (bool)supportsMultiPartResponse;
- (id)workQueue;

@end

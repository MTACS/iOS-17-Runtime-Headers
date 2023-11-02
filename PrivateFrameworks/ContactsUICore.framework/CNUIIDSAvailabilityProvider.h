
@interface CNUIIDSAvailabilityProvider : NSObject <CNUIIDSAvailabilityProvider> {
    CNUIDSHandleAvailabilityCache * _expanseRequests;
    CNUIDSHandleAvailabilityCache * _faceTimeRequests;
    CNUIDSHandleAvailabilityCache * _iMessageRequests;
    <CNUIIDSIDQueryControllerWrapper> * _queryControllerWrapper;
    NSArray * _requestFutures;
    <CNScheduler> * _resourceLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNUIDSHandleAvailabilityCache *expanseRequests;
@property (nonatomic, retain) CNUIDSHandleAvailabilityCache *faceTimeRequests;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNUIDSHandleAvailabilityCache *iMessageRequests;
@property (nonatomic, retain) <CNUIIDSIDQueryControllerWrapper> *queryControllerWrapper;
@property (nonatomic, retain) NSArray *requestFutures;
@property (nonatomic, retain) <CNScheduler> *resourceLock;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)makeExpanseRequestsCache;
+ (id)makeFaceTimeRequestsCache;
+ (id)makeIMessageRequestsCache;

- (void).cxx_destruct;
- (id)cacheForService:(long long)arg1;
- (id)expanseRequests;
- (id)faceTimeRequests;
- (id)iMessageRequests;
- (id)init;
- (id)initWithQueryControllerWrapper:(id)arg1;
- (id)queryControllerWrapper;
- (id)requestFutures;
- (id)resourceLock;
- (void)setExpanseRequests:(id)arg1;
- (void)setFaceTimeRequests:(id)arg1;
- (void)setIMessageRequests:(id)arg1;
- (void)setQueryControllerWrapper:(id)arg1;
- (void)setRequestFutures:(id)arg1;
- (void)setResourceLock:(id)arg1;
- (void)startRequestForCacheMisses:(id)arg1 service:(long long)arg2 scheduler:(id)arg3;
- (id)validateHandles:(id)arg1 forService:(long long)arg2 schedulerProvider:(id)arg3;
- (id)validateHandlesForExpanse:(id)arg1 schedulerProvider:(id)arg2;
- (id)validateHandlesForFaceTime:(id)arg1 schedulerProvider:(id)arg2;
- (id)validateHandlesForIMessage:(id)arg1 schedulerProvider:(id)arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)validateHandlesForFaceTime:(id)arg1 availabilityProvider:(id)arg2 schedulerProvider:(id)arg3 handler:(id /* block */)arg4;
+ (id)validateHandlesForIMessage:(id)arg1 availabilityProvider:(id)arg2 schedulerProvider:(id)arg3 handler:(id /* block */)arg4;

@end

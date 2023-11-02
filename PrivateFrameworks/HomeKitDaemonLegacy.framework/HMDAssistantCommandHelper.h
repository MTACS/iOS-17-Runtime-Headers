
@interface HMDAssistantCommandHelper : HMFObject <HMFLogging, HMFMessageReceiver> {
    bool  _executingActionSet;
    HMDHome * _home;
    NSArray * _mediaRequests;
    id /* block */  _mediaResponseHandler;
    NSMutableArray * _mediaResponses;
    NSUUID * _messageId;
    HMFMessageDispatcher * _msgDispatcher;
    unsigned long long  _numErrors;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _requests;
    id /* block */  _responseHandler;
    NSMutableArray * _responses;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool executingActionSet;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) NSArray *mediaRequests;
@property (nonatomic, copy) id /* block */ mediaResponseHandler;
@property (nonatomic, retain) NSMutableArray *mediaResponses;
@property (nonatomic, retain) NSUUID *messageId;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic) unsigned long long numErrors;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSArray *requests;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) NSMutableArray *responses;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__handleAccessoryCharacteristicsChanged:(id)arg1;
- (void)_register;
- (void)_reportOperationStartedForAccessory:(id)arg1;
- (void)_reportResponses;
- (void)_reportResponsesForMediaRequests;
- (void)addActionSetRequest:(id)arg1 actionSet:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addMediaWriteRequests:(id)arg1 withRequestProperty:(id)arg2 completion:(id /* block */)arg3;
- (void)addReadRequests:(id)arg1 home:(id)arg2 completion:(id /* block */)arg3;
- (void)addWriteRequests:(id)arg1 home:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (bool)executingActionSet;
- (void)handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (id)home;
- (id)initWithQueue:(id)arg1 msgDispatcher:(id)arg2;
- (id)mediaRequests;
- (id /* block */)mediaResponseHandler;
- (id)mediaResponses;
- (id)messageId;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (unsigned long long)numErrors;
- (id)queue;
- (void)removeResponses:(id)arg1;
- (void)reportOperationStartedForAccessory:(id)arg1;
- (id)requests;
- (id /* block */)responseHandler;
- (id)responses;
- (void)setExecutingActionSet:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setMediaRequests:(id)arg1;
- (void)setMediaResponseHandler:(id /* block */)arg1;
- (void)setMediaResponses:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setNumErrors:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setResponses:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)timeoutAndReportResults;
- (id)uuid;

@end


@interface IMDMessageFromStorageController : NSObject {
    id  __broadcasterForTesting;
    double  _lastMessageStorageTimerInterval;
    IMDMessageStore * _messageStore;
    unsigned long long  _messagesProcessedComingBackFromStorage;
    NSMutableSet * _messagesReceivedDuringStorage;
    unsigned long long  _pendingReadReceiptFromStorageCount;
    NSString * _serviceName;
    NSTimer * _storageTimer;
    double  _storageTimerInterval;
    IMTimingCollection * _timingComingBackFromStorage;
}

@property (nonatomic, retain) id _broadcasterForTesting;
@property (nonatomic) double lastMessageStorageTimerInterval;
@property (nonatomic, retain) IMDMessageStore *messageStore;
@property (nonatomic) unsigned long long messagesProcessedComingBackFromStorage;
@property (nonatomic, retain) NSMutableSet *messagesReceivedDuringStorage;
@property (nonatomic) unsigned long long pendingReadReceiptFromStorageCount;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) NSTimer *storageTimer;
@property (nonatomic) double storageTimerInterval;
@property (nonatomic, retain) IMTimingCollection *timingComingBackFromStorage;

+ (id)SMSStorageController;
+ (id)iMessageStorageController;

- (void).cxx_destruct;
- (id)_broadcasterForTesting;
- (void)_postMessagesFromStorage:(id)arg1;
- (void)_storageTimerFired;
- (void)_submitStorageMetricsWithError:(unsigned long long)arg1;
- (void)_updateStorageTimerWithInterval:(double)arg1;
- (id)broadcaster;
- (void)decrementPendingReadReceiptFromStorageCount;
- (void)incrementPendingReadReceiptFromStorageCount;
- (id)initWithMessageStore:(id)arg1;
- (bool)isAwaitingStorageTimer;
- (double)lastMessageStorageTimerInterval;
- (id)messageStore;
- (unsigned long long)messagesProcessedComingBackFromStorage;
- (id)messagesReceivedDuringStorage;
- (void)noteItemFromStorage:(id)arg1;
- (void)noteLastItemFromStorage:(id)arg1;
- (void)noteLastItemProcessed;
- (void)noteLastItemProcessedWithError:(unsigned long long)arg1;
- (void)noteSuppressedMessageUpdate:(id)arg1;
- (unsigned long long)pendingReadReceiptFromStorageCount;
- (id)serviceName;
- (void)setLastMessageStorageTimerInterval:(double)arg1;
- (void)setMessageStore:(id)arg1;
- (void)setMessagesProcessedComingBackFromStorage:(unsigned long long)arg1;
- (void)setMessagesReceivedDuringStorage:(id)arg1;
- (void)setPendingReadReceiptFromStorageCount:(unsigned long long)arg1;
- (void)setServiceName:(id)arg1;
- (void)setStorageTimer:(id)arg1;
- (void)setStorageTimerInterval:(double)arg1;
- (void)setTimingComingBackFromStorage:(id)arg1;
- (void)set_broadcasterForTesting:(id)arg1;
- (id)storageTimer;
- (double)storageTimerInterval;
- (id)timingComingBackFromStorage;

@end


@interface CSMSNExceptionManager : NSObject {
    NSMutableDictionary * _announceMessageExceptions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *announceMessageExceptions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)announceMessageExceptions;
- (void)beginAnnounceMessageException:(id)arg1 reason:(id)arg2;
- (void)endAnnounceMessageException:(id)arg1 reason:(id)arg2;
- (id)init;
- (id)queue;
- (void)setAnnounceMessageExceptions:(id)arg1;
- (void)setQueue:(id)arg1;

@end

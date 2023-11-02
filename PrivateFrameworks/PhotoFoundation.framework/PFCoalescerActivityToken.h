
@interface PFCoalescerActivityToken : NSObject {
    NSArray * _callStackReturnAddresses;
    NSDate * _creationDate;
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSString * _reason;
}

@property (retain) NSArray *callStackReturnAddresses;
@property (retain) NSDate *creationDate;
@property (retain) NSObject<OS_dispatch_group> *group;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSString *reason;

- (void).cxx_destruct;
- (id)callStackReturnAddresses;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (void)endActivity;
- (id)group;
- (id)initWithDispatchGroup:(id)arg1 reason:(id)arg2;
- (id)isolationQueue;
- (id)reason;
- (void)setCallStackReturnAddresses:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsolationQueue:(id)arg1;
- (void)setReason:(id)arg1;

@end

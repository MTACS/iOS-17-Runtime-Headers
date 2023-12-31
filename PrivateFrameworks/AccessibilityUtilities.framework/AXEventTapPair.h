
@interface AXEventTapPair : NSObject {
    id /* block */  _failedToHandleInTime;
    id /* block */  _matchingServiceHandler;
    struct __IOHIDEventSystemClient { } * _systemClient;
    int  _type;
    id /* block */  handler;
    NSString * identifier;
    int  priority;
}

@property (nonatomic, copy) id /* block */ failedToHandleInTime;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ matchingServiceHandler;
@property (nonatomic) int priority;
@property (nonatomic, retain) struct __IOHIDEventSystemClient { }*systemClient;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id /* block */)failedToHandleInTime;
- (id /* block */)handler;
- (id)identifier;
- (id /* block */)matchingServiceHandler;
- (int)priority;
- (void)setFailedToHandleInTime:(id /* block */)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMatchingServiceHandler:(id /* block */)arg1;
- (void)setPriority:(int)arg1;
- (void)setSystemClient:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setType:(int)arg1;
- (struct __IOHIDEventSystemClient { }*)systemClient;
- (int)type;

@end

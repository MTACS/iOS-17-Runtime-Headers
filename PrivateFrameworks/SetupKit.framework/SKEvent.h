
@interface SKEvent : NSObject {
    NSError * _error;
    int  _eventType;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) int eventType;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)error;
- (int)eventType;
- (id)initWithEventType:(int)arg1;
- (id)initWithEventType:(int)arg1 error:(id)arg2;

@end

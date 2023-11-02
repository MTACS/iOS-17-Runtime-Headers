
@interface ATXBMStoreEvent : NSObject <ATXBMStoreEventProtocol> {
    id  _eventBody;
    double  _timestamp;
}

@property (nonatomic, readonly) id eventBody;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)eventBody;
- (id)initWithEventBody:(id)arg1 timestamp:(double)arg2;
- (double)timestamp;

@end

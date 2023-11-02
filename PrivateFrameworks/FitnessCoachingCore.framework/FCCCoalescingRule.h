
@interface FCCCoalescingRule : NSObject <FCCDataSerializable> {
    NSString * _eventIdentifier;
    double  _interval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *eventIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)eventIdentifier;
- (id)initWithEventIdentifier:(id)arg1 interval:(double)arg2;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTransportData:(id)arg1;
- (double)interval;
- (id)protobuf;
- (void)setEventIdentifier:(id)arg1;
- (void)setInterval:(double)arg1;
- (id)transportData;

@end

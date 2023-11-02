
@interface BKBufferedEventEntry : NSObject <BSInvalidatable> {
    id  _additionalContext;
    id  _rawEvent;
    <BKHIDEventSenderInfo> * _sender;
    BKHIDEventDeliverySequence * _sequence;
}

@property (nonatomic, retain) id additionalContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BKHIDEventSenderInfo> *sender;
@property (nonatomic, retain) BKHIDEventDeliverySequence *sequence;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalContext;
- (struct __IOHIDEvent { }*)event;
- (void)invalidate;
- (id)sender;
- (id)sequence;
- (void)setAdditionalContext:(id)arg1;
- (void)setEvent:(struct __IOHIDEvent { }*)arg1;
- (void)setSender:(id)arg1;
- (void)setSequence:(id)arg1;

@end

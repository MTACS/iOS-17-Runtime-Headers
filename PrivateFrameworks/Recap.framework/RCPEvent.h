
@interface RCPEvent : NSObject <NSCoding, NSCopying> {
    unsigned long long  _deliveryTimestamp;
    struct __IOHIDEvent { } * _hidEvent;
    NSArray * _preActions;
    RCPEventSenderProperties * _senderProperties;
}

@property (nonatomic) unsigned long long deliveryTimestamp;
@property (nonatomic, readonly) struct __IOHIDEvent { }*hidEvent;
@property (nonatomic, readonly) NSArray *preActions;
@property (nonatomic, retain) RCPEventSenderProperties *senderProperties;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (id)eventWithHIDEvent:(struct __IOHIDEvent { }*)arg1;
+ (id)eventWithHIDEvent:(struct __IOHIDEvent { }*)arg1 deliveryTimeStamp:(unsigned long long)arg2;
+ (id)eventWithHIDEvent:(struct __IOHIDEvent { }*)arg1 deliveryTimeStamp:(unsigned long long)arg2 senderProperties:(id)arg3 preActions:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)deliveryTimestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)eventAdjustedForDeliveryTimeInterval:(double)arg1 eventEnvironment:(id)arg2;
- (struct __IOHIDEvent { }*)hidEvent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeliveryTimeStamp:(unsigned long long)arg1;
- (id)preActions;
- (id)senderProperties;
- (void)setDeliveryTimestamp:(unsigned long long)arg1;
- (void)setSenderProperties:(id)arg1;
- (unsigned long long)timestamp;

@end

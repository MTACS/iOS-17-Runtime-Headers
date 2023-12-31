
@interface HMDVideoStreamReconfigureEvent : HMFObject {
    unsigned long long  _eventType;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)eventType;
- (unsigned long long)hash;
- (id)initWithEventType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)timestamp;

@end

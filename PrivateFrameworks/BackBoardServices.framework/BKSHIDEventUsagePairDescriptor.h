
@interface BKSHIDEventUsagePairDescriptor : BKSHIDEventDescriptor {
    unsigned int  _page;
    unsigned int  _usage;
}

@property (readonly) unsigned int page;
@property (readonly) unsigned int usage;

+ (id)descriptorForHIDEventType:(unsigned int)arg1 page:(unsigned short)arg2 usage:(unsigned short)arg3;
+ (bool)supportsSecureCoding;

- (id)_initWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 eventType:(unsigned int)arg3;
- (bool)_page:(unsigned int)arg1 usage:(unsigned int)arg2 matchesHIDEvent:(struct __IOHIDEvent { }*)arg3;
- (void)appendDescriptionToFormatter:(id)arg1;
- (bool)describes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (unsigned int)page;
- (unsigned int)usage;

@end

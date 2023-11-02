
@interface BKSHIDEventSenderSpecificDescriptor : BKSHIDEventDescriptor {
    unsigned long long  _senderID;
    BKSHIDEventDescriptor * _sourceDescriptor;
}

@property (readonly) unsigned long long senderID;
@property (nonatomic, retain) BKSHIDEventDescriptor *sourceDescriptor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (bool)describes:(id)arg1;
- (id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1 senderID:(unsigned long long)arg2;
- (bool)matchesHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (unsigned long long)senderID;
- (void)setSourceDescriptor:(id)arg1;
- (id)sourceDescriptor;

@end

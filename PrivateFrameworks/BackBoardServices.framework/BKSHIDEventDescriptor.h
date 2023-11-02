
@interface BKSHIDEventDescriptor : NSObject <BSDescriptionProviding, BSDescriptionStreamable, NSCopying, NSSecureCoding> {
    unsigned int  _hidEventType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int hidEventType;
@property (readonly) Class superclass;

+ (id)descriptorForHIDEvent:(struct __IOHIDEvent { }*)arg1;
+ (id)descriptorWithEventType:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)describes:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)hidEventType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

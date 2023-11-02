
@interface BKSEventFocusDeferral : NSObject <NSSecureCoding> {
    BKSEventFocusDeferralProperties * _deferredProperties;
    int  _priority;
    BKSEventFocusDeferralProperties * _properties;
}

@property (nonatomic, readonly) BKSEventFocusDeferralProperties *deferredProperties;
@property (nonatomic, readonly) bool isCycle;
@property (nonatomic, readonly) int priority;
@property (nonatomic, readonly) BKSEventFocusDeferralProperties *properties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conciseDescription;
- (id)deferredProperties;
- (id)deferredPropertiesForProperties:(id)arg1;
- (bool)defersProperties:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1 deferredProperties:(id)arg2;
- (id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 withPriority:(int)arg3;
- (bool)isCycle;
- (bool)isEqual:(id)arg1;
- (int)priority;
- (id)properties;

@end

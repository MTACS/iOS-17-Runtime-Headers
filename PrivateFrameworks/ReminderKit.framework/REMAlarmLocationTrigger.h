
@interface REMAlarmLocationTrigger : REMAlarmTrigger <NSSecureCoding> {
    long long  _proximity;
    REMStructuredLocation * _structuredLocation;
}

@property (nonatomic) long long proximity;
@property (nonatomic, copy) REMStructuredLocation *structuredLocation;

+ (id)cdEntityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 structuredLocation:(id)arg2 proximity:(long long)arg3;
- (id)initWithStructuredLocation:(id)arg1 proximity:(long long)arg2;
- (bool)isContentEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTemporal;
- (long long)proximity;
- (void)setProximity:(long long)arg1;
- (void)setStructuredLocation:(id)arg1;
- (id)structuredLocation;

@end

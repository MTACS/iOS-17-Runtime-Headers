
@interface HDNotificationInstructionUUIDCriteria : HDNotificationInstructionCriteria {
    NSUUID * _UUID;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageDictionary:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)messageDictionary;

@end

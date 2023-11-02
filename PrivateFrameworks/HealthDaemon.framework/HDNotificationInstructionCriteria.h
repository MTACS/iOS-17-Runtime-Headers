
@interface HDNotificationInstructionCriteria : NSObject <NSCopying, NSSecureCoding>

+ (id)criteriaIdentifier;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)isValidWithDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (id)messageDictionary;

@end


@interface SGReminderMetadata : NSObject <NSCopying, NSSecureCoding> {
    SGRecordId * _recordId;
    NSString * _sourceUniqueIdentifier;
}

@property (nonatomic, readonly) SGRecordId *recordId;
@property (nonatomic, readonly) NSString *sourceUniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(id)arg1 sourceUniqueIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReminderMetadata:(id)arg1;
- (id)recordId;
- (id)sourceUniqueIdentifier;

@end


@interface HKSharedSummaryTransaction : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSDate * _creationDate;
    NSDictionary * _metadata;
    NSString * _sourceDeviceIdentifier;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSString *sourceDeviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_initWithUUID:(id)arg1 sourceDeviceIdentifier:(id)arg2 metadata:(id)arg3;
- (void)_setCreationDate:(id)arg1;
- (void)_setSourceDeviceIdentifier:(id)arg1;
- (void)addMetadata:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)sourceDeviceIdentifier;

@end

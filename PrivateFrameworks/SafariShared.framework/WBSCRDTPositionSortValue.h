
@interface WBSCRDTPositionSortValue : NSObject <NSCopying, NSSecureCoding> {
    long long  _changeID;
    NSString * _deviceIdentifier;
    long long  _sortValue;
}

@property (nonatomic, readonly) long long changeID;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long sortValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)changeID;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceIdentifier;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSortValue:(long long)arg1 deviceIdentifier:(id)arg2 changeID:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPositionSortValue:(id)arg1;
- (id)positionSortValueWithChangeID:(long long)arg1;
- (id)positionSortValueWithSortValue:(long long)arg1;
- (long long)sortValue;

@end

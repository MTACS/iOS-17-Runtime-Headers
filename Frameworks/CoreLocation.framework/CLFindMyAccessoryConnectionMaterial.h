
@interface CLFindMyAccessoryConnectionMaterial : NSObject <NSCopying, NSSecureCoding> {
    NSData * _address;
    NSData * _ltk;
    NSNumber * _primaryIndex;
    NSNumber * _secondaryIndex;
}

@property (readonly) NSData *address;
@property (readonly) NSData *ltk;
@property (readonly) NSNumber *primaryIndex;
@property (readonly) NSNumber *secondaryIndex;

+ (bool)supportsSecureCoding;

- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)dictionaryDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAddress:(id)arg1 ltk:(id)arg2;
- (id)initWithAddress:(id)arg1 ltk:(id)arg2 primaryIndex:(id)arg3 secondaryIndex:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMaterial:(id)arg1;
- (id)ltk;
- (id)primaryIndex;
- (id)secondaryIndex;

@end

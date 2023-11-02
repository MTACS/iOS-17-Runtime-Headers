
@interface WBSCRDTPosition : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _sortValues;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSArray *sortValues;

+ (id)positionBetweenPosition:(id)arg1 andPosition:(id)arg2 withDeviceIdentifier:(id)arg3 changeID:(long long)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSortValue:(id)arg1 parentSortValues:(id)arg2;
- (id)initWithSortValues:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sortValues;

@end


@protocol HDDistinctableObject <NSObject>

@required

+ (bool)supportsDistinctByKeyPath:(NSString *)arg1;

- (<NSSecureCoding> *)uniqueIdentifierForDistinctByKeyPath:(NSString *)arg1 error:(id*)arg2;

@end

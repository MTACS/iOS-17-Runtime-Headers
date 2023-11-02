
@protocol FMDCodable <NSObject, NSCopying>

@required

- (bool)encodeWithFMDCoder:(id <FMDEncoder>)arg1 error:(id*)arg2;
- (id)initWithFMDCoder:(id <FMDDecoder>)arg1 error:(id*)arg2;

@optional

+ (NSString *)objectType;
+ (NSString *)objectTypeKey;

@end

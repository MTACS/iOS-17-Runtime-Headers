
@interface PPSource : NSObject <MLFeatureProvider, NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    NSArray * _contactHandles;
    NSDate * _date;
    NSString * _documentId;
    NSString * _groupId;
    NSString * _language;
    PPSourceMetadata * _metadata;
    NSDate * _relevanceDate;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSArray *contactHandles;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *documentId;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) NSString *groupId;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) PPSourceMetadata *metadata;
@property (nonatomic, readonly) NSDate *relevanceDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)contactHandles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)documentId;
- (void)encodeWithCoder:(id)arg1;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)groupId;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4;
- (id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4 relevanceDate:(id)arg5 contactHandles:(id)arg6 language:(id)arg7 metadata:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSource:(id)arg1;
- (id)language;
- (id)metadata;
- (id)relevanceDate;
- (id)sha256;

@end

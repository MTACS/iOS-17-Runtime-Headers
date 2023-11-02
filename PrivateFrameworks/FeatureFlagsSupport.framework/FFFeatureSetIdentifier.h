
@interface FFFeatureSetIdentifier : NSObject <NSCopying> {
    NSString * _featureGroupName;
    NSString * _featureSetName;
}

@property (nonatomic, readonly) NSString *featureGroupName;
@property (nonatomic, readonly) NSString *featureSetName;

+ (id)identifierFromString:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)featureGroupName;
- (id)featureSetName;
- (unsigned long long)hash;
- (id)initWithGroup:(id)arg1 set:(id)arg2;
- (bool)isEqual:(id)arg1;

@end

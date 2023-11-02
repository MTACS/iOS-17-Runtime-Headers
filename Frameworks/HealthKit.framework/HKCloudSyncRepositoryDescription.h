
@interface HKCloudSyncRepositoryDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    HKCloudSyncContainerDescription * _primaryContainerDescription;
    NSArray * _secondaryContainerDescriptions;
}

@property (nonatomic, readonly, copy) NSString *fullDescription;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) HKCloudSyncContainerDescription *primaryContainerDescription;
@property (nonatomic, readonly, copy) NSArray *secondaryContainerDescriptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForContainer:(id)arg1;
- (id)_descriptionForDatabase:(id)arg1 indentCount:(unsigned long long)arg2;
- (id)_descriptionForRecord:(id)arg1 indentCount:(unsigned long long)arg2;
- (id)_descriptionForZone:(id)arg1 indentCount:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fullDescription;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 primaryContainerDescription:(id)arg2 secondaryContainerDescriptions:(id)arg3;
- (id)primaryContainerDescription;
- (id)secondaryContainerDescriptions;

@end

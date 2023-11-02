
@interface REMTemplateSectionsDataViewInvocation_fetchByObjectIDs : REMStoreInvocation <NSSecureCoding> {
    NSArray * _objectIDs;
}

@property (nonatomic, readonly) NSArray *objectIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectIDs;

@end

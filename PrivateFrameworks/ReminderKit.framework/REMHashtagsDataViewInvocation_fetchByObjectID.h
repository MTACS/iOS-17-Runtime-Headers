
@interface REMHashtagsDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding> {
    bool  _allowConcealedObjects;
    NSArray * _objectIDs;
}

@property (nonatomic) bool allowConcealedObjects;
@property (nonatomic, readonly) NSArray *objectIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowConcealedObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectIDs;
- (void)setAllowConcealedObjects:(bool)arg1;

@end


@interface REMListsDataViewInvocation_fetchByTemplateObjectID : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _templateObjectID;
}

@property (nonatomic, readonly) REMObjectID *templateObjectID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplateObjectID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)templateObjectID;

@end

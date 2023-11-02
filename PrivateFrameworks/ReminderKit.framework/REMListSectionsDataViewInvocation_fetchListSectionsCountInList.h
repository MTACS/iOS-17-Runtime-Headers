
@interface REMListSectionsDataViewInvocation_fetchListSectionsCountInList : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _listObjectID;
}

@property (nonatomic, readonly) REMObjectID *listObjectID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentListObjectID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)listObjectID;

@end

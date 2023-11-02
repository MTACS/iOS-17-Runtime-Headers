
@interface REMSmartListSectionsDataViewInvocation_fetchSmartListSectionsInSmartList : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _smartListObjectID;
}

@property (nonatomic, readonly) REMObjectID *smartListObjectID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentSmartListObjectID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)smartListObjectID;

@end

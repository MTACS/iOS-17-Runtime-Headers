
@interface REMListSectionStorage : REMBaseSectionStorage {
    NSString * canonicalName;
}

@property (nonatomic, retain) NSString *canonicalName;
@property (nonatomic, retain) REMObjectID *listID;

+ (id)cdEntityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canonicalName;
- (id)cdKeyToStorageKeyMap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 displayName:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)listID;
- (void)setCanonicalName:(id)arg1;
- (void)setListID:(id)arg1;

@end

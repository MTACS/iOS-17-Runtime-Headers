
@interface REMRemindersDataViewInvocation_fetchByListID : REMStoreInvocation <NSSecureCoding> {
    bool  _includingSubtasks;
    REMObjectID * _listID;
}

@property (nonatomic, readonly) bool includingSubtasks;
@property (nonatomic, readonly) REMObjectID *listID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includingSubtasks;
- (id)initWithCoder:(id)arg1;
- (id)initWithListID:(id)arg1 includingSubtasks:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)listID;

@end

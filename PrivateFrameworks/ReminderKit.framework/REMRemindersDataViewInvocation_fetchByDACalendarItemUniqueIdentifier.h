
@interface REMRemindersDataViewInvocation_fetchByDACalendarItemUniqueIdentifier : REMStoreInvocation <NSSecureCoding> {
    NSArray * _daCalendarItemUniqueIdentifiers;
    REMObjectID * _listObjectID;
}

@property (nonatomic, readonly) NSArray *daCalendarItemUniqueIdentifiers;
@property (nonatomic, readonly) REMObjectID *listObjectID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daCalendarItemUniqueIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDACalendarItemUniqueIdentifiers:(id)arg1 listObjectID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)listObjectID;

@end

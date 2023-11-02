
@interface REMAttachment : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding> {
    REMObjectID * _accountID;
    REMObjectID * _objectID;
    REMObjectID * _reminderID;
    NSString * _uti;
}

@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) REMObjectID *reminderID;
@property (nonatomic, readonly) NSString *uti;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAttachment:(id)arg1 objectID:(id)arg2 accountID:(id)arg3 reminderID:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)objectID;
- (id)remObjectID;
- (id)reminderID;
- (id)uti;

@end

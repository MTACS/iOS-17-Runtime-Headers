
@interface REMAlarmTrigger : NSObject <NSSecureCoding, REMObjectIDProviding> {
    REMObjectID * _objectID;
}

@property (nonatomic, readonly) bool isTemporal;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *remObjectID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAlarmTrigger:(id)arg1 objectID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (bool)isContentEqual:(id)arg1;
- (bool)isTemporal;
- (id)objectID;
- (id)remObjectID;
- (void)setObjectID:(id)arg1;

@end

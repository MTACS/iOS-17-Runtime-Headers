
@interface REMManualOrdering : NSObject <NSCopying, NSSecureCoding> {
    NSString * _listID;
    short  _listType;
    NSDate * _modifiedDate;
    REMObjectID * _objectID;
    NSDictionary * _secondaryLevelElementIDsByTopLevelElementID;
    NSArray * _topLevelElementIDs;
    REMObjectID * _uncommitedElementsAccountID;
}

@property (nonatomic, readonly) NSString *listID;
@property (nonatomic, readonly) short listType;
@property (nonatomic, readonly) NSDate *modifiedDate;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) NSDictionary *secondaryLevelElementIDsByTopLevelElementID;
@property (nonatomic, readonly) NSArray *topLevelElementIDs;
@property (nonatomic, readonly) REMObjectID *uncommitedElementsAccountID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 listType:(short)arg2 listID:(id)arg3 modifiedDate:(id)arg4;
- (id)initWithObjectID:(id)arg1 listType:(short)arg2 listID:(id)arg3 topLevelElementIDs:(id)arg4 secondaryLevelElementIDsByTopLevelElementID:(id)arg5 uncommitedElementsAccountID:(id)arg6 modifiedDate:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)listID;
- (short)listType;
- (id)modifiedDate;
- (id)objectID;
- (id)remObjectID;
- (id)secondaryLevelElementIDsByTopLevelElementID;
- (id)topLevelElementIDs;
- (id)uncommitedElementsAccountID;

@end

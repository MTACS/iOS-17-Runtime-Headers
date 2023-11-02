
@interface REMReminderPredicateDescriptor : NSObject <NSSecureCoding> {
    bool  _completed;
    NSArray * _descriptors;
    NSDate * _endingDueDate;
    REMObjectID * _listID;
    NSArray * _objectIDs;
    REMObjectID * _parentReminderID;
    NSDate * _startingDueDate;
    NSString * _text;
    long long  _textMatching;
    long long  _type;
}

@property (nonatomic) bool completed;
@property (nonatomic, retain) NSArray *descriptors;
@property (nonatomic, retain) NSDate *endingDueDate;
@property (nonatomic, retain) REMObjectID *listID;
@property (nonatomic, retain) NSArray *objectIDs;
@property (nonatomic, retain) REMObjectID *parentReminderID;
@property (nonatomic, retain) NSDate *startingDueDate;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) long long textMatching;
@property (nonatomic, readonly) long long type;

+ (id)andPredicateDescriptorWithDescriptors:(id)arg1;
+ (id)orPredicateDescriptorWithDescriptors:(id)arg1;
+ (id)predicateDescriptorForRemindersWithCompleted:(bool)arg1;
+ (id)predicateDescriptorForRemindersWithDisplayDateBetween:(id)arg1 and:(id)arg2;
+ (id)predicateDescriptorForRemindersWithDisplayDateOnOrAfter:(id)arg1;
+ (id)predicateDescriptorForRemindersWithDisplayDateOnOrBefore:(id)arg1;
+ (id)predicateDescriptorForRemindersWithDueDateBetween:(id)arg1 and:(id)arg2;
+ (id)predicateDescriptorForRemindersWithDueDateOnOrAfter:(id)arg1;
+ (id)predicateDescriptorForRemindersWithDueDateOnOrBefore:(id)arg1;
+ (id)predicateDescriptorForRemindersWithListID:(id)arg1;
+ (id)predicateDescriptorForRemindersWithObjectIDs:(id)arg1;
+ (id)predicateDescriptorForRemindersWithParentReminderID:(id)arg1;
+ (id)predicateDescriptorForRemindersWithTitleBeginsWith:(id)arg1;
+ (id)predicateDescriptorForRemindersWithTitleContains:(id)arg1;
+ (id)predicateDescriptorForRemindersWithTitleEndsWith:(id)arg1;
+ (id)predicateDescriptorForRemindersWithTitleEquals:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)completed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptors;
- (void)encodeWithCoder:(id)arg1;
- (id)endingDueDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithReminderPredicateDescriptor:(id)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)listID;
- (id)objectIDs;
- (id)parentReminderID;
- (void)setCompleted:(bool)arg1;
- (void)setDescriptors:(id)arg1;
- (void)setEndingDueDate:(id)arg1;
- (void)setListID:(id)arg1;
- (void)setObjectIDs:(id)arg1;
- (void)setParentReminderID:(id)arg1;
- (void)setStartingDueDate:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextMatching:(long long)arg1;
- (id)startingDueDate;
- (id)text;
- (long long)textMatching;
- (long long)type;

@end

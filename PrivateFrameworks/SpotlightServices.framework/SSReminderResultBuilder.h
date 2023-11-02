
@interface SSReminderResultBuilder : SSResultBuilder {
    NSDate * _completionDate;
    NSDate * _dueDate;
    NSArray * _hashtags;
    bool  _isAllDay;
    bool  _isCompleted;
    bool  _isFlagged;
    bool  _isRecurring;
    NSDate * _modificationDate;
    NSString * _note;
    NSString * _reminder;
}

@property (nonatomic, retain) NSDate *completionDate;
@property (nonatomic, retain) NSDate *dueDate;
@property (nonatomic, retain) NSArray *hashtags;
@property (nonatomic) bool isAllDay;
@property (nonatomic) bool isCompleted;
@property (nonatomic) bool isFlagged;
@property (nonatomic) bool isRecurring;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSString *note;
@property (nonatomic, retain) NSString *reminder;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;
+ (id)stringWithCompletionDate:(id)arg1 dueDate:(id)arg2 modificationDate:(id)arg3;

- (void).cxx_destruct;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)buildTitle;
- (id)completionDate;
- (id)dueDate;
- (id)hashtags;
- (id)initWithResult:(id)arg1;
- (bool)isAllDay;
- (bool)isCompleted;
- (bool)isFlagged;
- (bool)isRecurring;
- (id)modificationDate;
- (id)note;
- (id)reminder;
- (void)setCompletionDate:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setHashtags:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setIsCompleted:(bool)arg1;
- (void)setIsFlagged:(bool)arg1;
- (void)setIsRecurring:(bool)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setReminder:(id)arg1;

@end

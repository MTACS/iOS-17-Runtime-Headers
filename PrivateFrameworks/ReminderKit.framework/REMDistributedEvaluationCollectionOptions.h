
@interface REMDistributedEvaluationCollectionOptions : NSObject <NSSecureCoding> {
    unsigned long long  _creationDateWithinDays;
    unsigned long long  _dateResolutionInSeconds;
    bool  _includeAccountType;
    bool  _includeAlarmDates;
    bool  _includeAttachmentUTIs;
    bool  _includeDates;
    bool  _includeDayOfWeek;
    bool  _includeIsFlagged;
    bool  _includeListGroupInfo;
    bool  _includeListNameFuzzedEmbeddings;
    bool  _includeListNames;
    bool  _includeLocationInfo;
    bool  _includePriority;
    bool  _includeRecurrenceInfo;
    bool  _includeRemindMeWhenMessagingInfo;
    bool  _includeReminderTitleCategoryFilteredStopWords;
    bool  _includeReminderTitleCategorySentence2Vec;
    bool  _includeReminderTitleCategoryUniversalGrammar;
    bool  _includeReminderTitleFuzzedEmbeddings;
    bool  _includeReminderTitleSaltedHash;
    bool  _includeReminderTitles;
    bool  _includeSubtaskInfo;
    bool  _includeSystemLanguage;
    bool  _includeSystemTimezone;
    bool  _includeUserActivityInfo;
    bool  _relevantWordTagsIncludeOtherWord;
    double  _reminderTitleCategoryDistanceTolerance;
    NSURL * _reminderTitleCategoryEmbeddingURL;
}

@property (nonatomic) unsigned long long creationDateWithinDays;
@property (nonatomic) unsigned long long dateResolutionInSeconds;
@property (nonatomic) bool includeAccountType;
@property (nonatomic) bool includeAlarmDates;
@property (nonatomic) bool includeAttachmentUTIs;
@property (nonatomic) bool includeDates;
@property (nonatomic) bool includeDayOfWeek;
@property (nonatomic) bool includeIsFlagged;
@property (nonatomic) bool includeListGroupInfo;
@property (nonatomic) bool includeListNameFuzzedEmbeddings;
@property (nonatomic) bool includeListNames;
@property (nonatomic) bool includeLocationInfo;
@property (nonatomic) bool includePriority;
@property (nonatomic) bool includeRecurrenceInfo;
@property (nonatomic) bool includeRemindMeWhenMessagingInfo;
@property (nonatomic) bool includeReminderTitleCategoryFilteredStopWords;
@property (nonatomic) bool includeReminderTitleCategorySentence2Vec;
@property (nonatomic) bool includeReminderTitleCategoryUniversalGrammar;
@property (nonatomic) bool includeReminderTitleFuzzedEmbeddings;
@property (nonatomic) bool includeReminderTitleSaltedHash;
@property (nonatomic) bool includeReminderTitles;
@property (nonatomic) bool includeSubtaskInfo;
@property (nonatomic) bool includeSystemLanguage;
@property (nonatomic) bool includeSystemTimezone;
@property (nonatomic) bool includeUserActivityInfo;
@property (nonatomic) bool relevantWordTagsIncludeOtherWord;
@property (nonatomic) double reminderTitleCategoryDistanceTolerance;
@property (nonatomic, retain) NSURL *reminderTitleCategoryEmbeddingURL;

+ (id)_attachmentURLFromFilenameWithKey:(id)arg1 inJSONRepresentation:(id)arg2 attachmentURLs:(id)arg3 error:(id*)arg4;
+ (id)optionsFromJSONRepresentation:(id)arg1 attachmentURLs:(id)arg2 error:(id*)arg3;
+ (id)optionsWithDefaultValues;
+ (id)optionsWithEverythingOff;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (unsigned long long)creationDateWithinDays;
- (unsigned long long)dateResolutionInSeconds;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeAccountType;
- (bool)includeAlarmDates;
- (bool)includeAttachmentUTIs;
- (bool)includeDates;
- (bool)includeDayOfWeek;
- (bool)includeIsFlagged;
- (bool)includeListGroupInfo;
- (bool)includeListNameFuzzedEmbeddings;
- (bool)includeListNames;
- (bool)includeLocationInfo;
- (bool)includePriority;
- (bool)includeRecurrenceInfo;
- (bool)includeRemindMeWhenMessagingInfo;
- (bool)includeReminderTitleCategoryFilteredStopWords;
- (bool)includeReminderTitleCategorySentence2Vec;
- (bool)includeReminderTitleCategoryUniversalGrammar;
- (bool)includeReminderTitleFuzzedEmbeddings;
- (bool)includeReminderTitleSaltedHash;
- (bool)includeReminderTitles;
- (bool)includeSubtaskInfo;
- (bool)includeSystemLanguage;
- (bool)includeSystemTimezone;
- (bool)includeUserActivityInfo;
- (id)initWithCoder:(id)arg1;
- (bool)relevantWordTagsIncludeOtherWord;
- (double)reminderTitleCategoryDistanceTolerance;
- (id)reminderTitleCategoryEmbeddingURL;
- (void)setCreationDateWithinDays:(unsigned long long)arg1;
- (void)setDateResolutionInSeconds:(unsigned long long)arg1;
- (void)setIncludeAccountType:(bool)arg1;
- (void)setIncludeAlarmDates:(bool)arg1;
- (void)setIncludeAttachmentUTIs:(bool)arg1;
- (void)setIncludeDates:(bool)arg1;
- (void)setIncludeDayOfWeek:(bool)arg1;
- (void)setIncludeIsFlagged:(bool)arg1;
- (void)setIncludeListGroupInfo:(bool)arg1;
- (void)setIncludeListNameFuzzedEmbeddings:(bool)arg1;
- (void)setIncludeListNames:(bool)arg1;
- (void)setIncludeLocationInfo:(bool)arg1;
- (void)setIncludePriority:(bool)arg1;
- (void)setIncludeRecurrenceInfo:(bool)arg1;
- (void)setIncludeRemindMeWhenMessagingInfo:(bool)arg1;
- (void)setIncludeReminderTitleCategoryFilteredStopWords:(bool)arg1;
- (void)setIncludeReminderTitleCategorySentence2Vec:(bool)arg1;
- (void)setIncludeReminderTitleCategoryUniversalGrammar:(bool)arg1;
- (void)setIncludeReminderTitleFuzzedEmbeddings:(bool)arg1;
- (void)setIncludeReminderTitleSaltedHash:(bool)arg1;
- (void)setIncludeReminderTitles:(bool)arg1;
- (void)setIncludeSubtaskInfo:(bool)arg1;
- (void)setIncludeSystemLanguage:(bool)arg1;
- (void)setIncludeSystemTimezone:(bool)arg1;
- (void)setIncludeUserActivityInfo:(bool)arg1;
- (void)setRelevantWordTagsIncludeOtherWord:(bool)arg1;
- (void)setReminderTitleCategoryDistanceTolerance:(double)arg1;
- (void)setReminderTitleCategoryEmbeddingURL:(id)arg1;

@end

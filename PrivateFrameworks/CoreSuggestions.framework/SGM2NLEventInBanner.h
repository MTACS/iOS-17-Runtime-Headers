
@interface SGM2NLEventInBanner : PBCodable <NSCopying> {
    int  _actionType;
    NSString * _addedAttendeesCount;
    NSString * _calendarAppUsageLevel;
    unsigned int  _confidenceScore;
    int  _dateAdj;
    unsigned int  _daysFromStartDate;
    int  _duraAdj;
    NSString * _eventType;
    int  _extractionLevel;
    struct { 
        unsigned int actionType : 1; 
        unsigned int confidenceScore : 1; 
        unsigned int dateAdj : 1; 
        unsigned int daysFromStartDate : 1; 
        unsigned int duraAdj : 1; 
        unsigned int extractionLevel : 1; 
        unsigned int interface : 1; 
        unsigned int locationAdj : 1; 
        unsigned int mailAppUsageLevel : 1; 
        unsigned int messagesAppUsageLevel : 1; 
        unsigned int participantCount : 1; 
        unsigned int significantSender : 1; 
        unsigned int titleAdj : 1; 
        unsigned int titleSource : 1; 
        unsigned int usedBubblesCount : 1; 
    }  _has;
    int  _interface;
    NSString * _key;
    NSString * _languageID;
    int  _locationAdj;
    int  _mailAppUsageLevel;
    int  _messagesAppUsageLevel;
    unsigned int  _participantCount;
    int  _significantSender;
    int  _titleAdj;
    int  _titleSource;
    unsigned int  _usedBubblesCount;
}

@property (nonatomic) int actionType;
@property (nonatomic, retain) NSString *addedAttendeesCount;
@property (nonatomic, retain) NSString *calendarAppUsageLevel;
@property (nonatomic) unsigned int confidenceScore;
@property (nonatomic) int dateAdj;
@property (nonatomic) unsigned int daysFromStartDate;
@property (nonatomic) int duraAdj;
@property (nonatomic, retain) NSString *eventType;
@property (nonatomic) int extractionLevel;
@property (nonatomic) bool hasActionType;
@property (nonatomic, readonly) bool hasAddedAttendeesCount;
@property (nonatomic, readonly) bool hasCalendarAppUsageLevel;
@property (nonatomic) bool hasConfidenceScore;
@property (nonatomic) bool hasDateAdj;
@property (nonatomic) bool hasDaysFromStartDate;
@property (nonatomic) bool hasDuraAdj;
@property (nonatomic, readonly) bool hasEventType;
@property (nonatomic) bool hasExtractionLevel;
@property (nonatomic) bool hasInterface;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasLanguageID;
@property (nonatomic) bool hasLocationAdj;
@property (nonatomic) bool hasMailAppUsageLevel;
@property (nonatomic) bool hasMessagesAppUsageLevel;
@property (nonatomic) bool hasParticipantCount;
@property (nonatomic) bool hasSignificantSender;
@property (nonatomic) bool hasTitleAdj;
@property (nonatomic) bool hasTitleSource;
@property (nonatomic) bool hasUsedBubblesCount;
@property (nonatomic) int interface;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *languageID;
@property (nonatomic) int locationAdj;
@property (nonatomic) int mailAppUsageLevel;
@property (nonatomic) int messagesAppUsageLevel;
@property (nonatomic) unsigned int participantCount;
@property (nonatomic) int significantSender;
@property (nonatomic) int titleAdj;
@property (nonatomic) int titleSource;
@property (nonatomic) unsigned int usedBubblesCount;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (int)StringAsDateAdj:(id)arg1;
- (int)StringAsDuraAdj:(id)arg1;
- (int)StringAsExtractionLevel:(id)arg1;
- (int)StringAsInterface:(id)arg1;
- (int)StringAsLocationAdj:(id)arg1;
- (int)StringAsMailAppUsageLevel:(id)arg1;
- (int)StringAsMessagesAppUsageLevel:(id)arg1;
- (int)StringAsSignificantSender:(id)arg1;
- (int)StringAsTitleAdj:(id)arg1;
- (int)StringAsTitleSource:(id)arg1;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (id)addedAttendeesCount;
- (id)calendarAppUsageLevel;
- (unsigned int)confidenceScore;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dateAdj;
- (id)dateAdjAsString:(int)arg1;
- (unsigned int)daysFromStartDate;
- (id)description;
- (id)dictionaryRepresentation;
- (int)duraAdj;
- (id)duraAdjAsString:(int)arg1;
- (id)eventType;
- (int)extractionLevel;
- (id)extractionLevelAsString:(int)arg1;
- (bool)hasActionType;
- (bool)hasAddedAttendeesCount;
- (bool)hasCalendarAppUsageLevel;
- (bool)hasConfidenceScore;
- (bool)hasDateAdj;
- (bool)hasDaysFromStartDate;
- (bool)hasDuraAdj;
- (bool)hasEventType;
- (bool)hasExtractionLevel;
- (bool)hasInterface;
- (bool)hasKey;
- (bool)hasLanguageID;
- (bool)hasLocationAdj;
- (bool)hasMailAppUsageLevel;
- (bool)hasMessagesAppUsageLevel;
- (bool)hasParticipantCount;
- (bool)hasSignificantSender;
- (bool)hasTitleAdj;
- (bool)hasTitleSource;
- (bool)hasUsedBubblesCount;
- (unsigned long long)hash;
- (int)interface;
- (id)interfaceAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)languageID;
- (int)locationAdj;
- (id)locationAdjAsString:(int)arg1;
- (int)mailAppUsageLevel;
- (id)mailAppUsageLevelAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (int)messagesAppUsageLevel;
- (id)messagesAppUsageLevelAsString:(int)arg1;
- (unsigned int)participantCount;
- (bool)readFrom:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setAddedAttendeesCount:(id)arg1;
- (void)setCalendarAppUsageLevel:(id)arg1;
- (void)setConfidenceScore:(unsigned int)arg1;
- (void)setDateAdj:(int)arg1;
- (void)setDaysFromStartDate:(unsigned int)arg1;
- (void)setDuraAdj:(int)arg1;
- (void)setEventType:(id)arg1;
- (void)setExtractionLevel:(int)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasConfidenceScore:(bool)arg1;
- (void)setHasDateAdj:(bool)arg1;
- (void)setHasDaysFromStartDate:(bool)arg1;
- (void)setHasDuraAdj:(bool)arg1;
- (void)setHasExtractionLevel:(bool)arg1;
- (void)setHasInterface:(bool)arg1;
- (void)setHasLocationAdj:(bool)arg1;
- (void)setHasMailAppUsageLevel:(bool)arg1;
- (void)setHasMessagesAppUsageLevel:(bool)arg1;
- (void)setHasParticipantCount:(bool)arg1;
- (void)setHasSignificantSender:(bool)arg1;
- (void)setHasTitleAdj:(bool)arg1;
- (void)setHasTitleSource:(bool)arg1;
- (void)setHasUsedBubblesCount:(bool)arg1;
- (void)setInterface:(int)arg1;
- (void)setKey:(id)arg1;
- (void)setLanguageID:(id)arg1;
- (void)setLocationAdj:(int)arg1;
- (void)setMailAppUsageLevel:(int)arg1;
- (void)setMessagesAppUsageLevel:(int)arg1;
- (void)setParticipantCount:(unsigned int)arg1;
- (void)setSignificantSender:(int)arg1;
- (void)setTitleAdj:(int)arg1;
- (void)setTitleSource:(int)arg1;
- (void)setUsedBubblesCount:(unsigned int)arg1;
- (int)significantSender;
- (id)significantSenderAsString:(int)arg1;
- (int)titleAdj;
- (id)titleAdjAsString:(int)arg1;
- (int)titleSource;
- (id)titleSourceAsString:(int)arg1;
- (unsigned int)usedBubblesCount;
- (void)writeTo:(id)arg1;

@end

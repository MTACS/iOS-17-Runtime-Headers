
@interface NTPBIssueReadingHistoryItem : PBCodable <FCMutableIssueReadingHistoryItem, NSCopying> {
    NSString * _identifier;
    NSString * _issueID;
    NTPBDate * _lastBadgedPBDate;
    NTPBDate * _lastEngagedPBDate;
    NTPBDate * _lastRemovedFromMyMagazinesPBDate;
    NTPBDate * _lastSeenPBDate;
    NSString * _lastVisitedArticleID;
    NTPBDate * _lastVisitedPBDate;
    NSString * _lastVisitedPageID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasIssueID;
@property (nonatomic, readonly) bool hasLastBadgedPBDate;
@property (nonatomic, readonly) bool hasLastEngagedPBDate;
@property (nonatomic, readonly) bool hasLastRemovedFromMyMagazinesPBDate;
@property (nonatomic, readonly) bool hasLastSeenPBDate;
@property (nonatomic, readonly) bool hasLastVisitedArticleID;
@property (nonatomic, readonly) bool hasLastVisitedPBDate;
@property (nonatomic, readonly) bool hasLastVisitedPageID;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, copy) NSString *issueID;
@property (nonatomic, retain) NSString *issueID;
@property (nonatomic, copy) NSDate *lastBadgedDate;
@property (nonatomic, retain) NTPBDate *lastBadgedPBDate;
@property (nonatomic, copy) NSDate *lastEngagedDate;
@property (nonatomic, retain) NTPBDate *lastEngagedPBDate;
@property (nonatomic, copy) NSDate *lastRemovedFromMyMagazinesDate;
@property (nonatomic, retain) NTPBDate *lastRemovedFromMyMagazinesPBDate;
@property (nonatomic, copy) NSDate *lastSeenDate;
@property (nonatomic, retain) NTPBDate *lastSeenPBDate;
@property (nonatomic, copy) NSString *lastVisitedArticleID;
@property (nonatomic, retain) NSString *lastVisitedArticleID;
@property (nonatomic, copy) NSDate *lastVisitedDate;
@property (nonatomic, retain) NTPBDate *lastVisitedPBDate;
@property (nonatomic, copy) NSString *lastVisitedPageID;
@property (nonatomic, retain) NSString *lastVisitedPageID;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasIssueID;
- (bool)hasLastBadgedPBDate;
- (bool)hasLastEngagedPBDate;
- (bool)hasLastRemovedFromMyMagazinesPBDate;
- (bool)hasLastSeenPBDate;
- (bool)hasLastVisitedArticleID;
- (bool)hasLastVisitedPBDate;
- (bool)hasLastVisitedPageID;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)issueID;
- (id)lastBadgedPBDate;
- (id)lastEngagedPBDate;
- (id)lastRemovedFromMyMagazinesPBDate;
- (id)lastSeenPBDate;
- (id)lastVisitedArticleID;
- (id)lastVisitedPBDate;
- (id)lastVisitedPageID;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIssueID:(id)arg1;
- (void)setLastBadgedPBDate:(id)arg1;
- (void)setLastEngagedPBDate:(id)arg1;
- (void)setLastRemovedFromMyMagazinesPBDate:(id)arg1;
- (void)setLastSeenPBDate:(id)arg1;
- (void)setLastVisitedArticleID:(id)arg1;
- (void)setLastVisitedPBDate:(id)arg1;
- (void)setLastVisitedPageID:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)issueReadingHistoryItemWithCKRecord:(id)arg1;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (id)asCKRecord;
- (id)lastBadgedDate;
- (id)lastEngagedDate;
- (id)lastRemovedFromMyMagazinesDate;
- (id)lastSeenDate;
- (id)lastVisitedDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setLastBadgedDate:(id)arg1;
- (void)setLastEngagedDate:(id)arg1;
- (void)setLastRemovedFromMyMagazinesDate:(id)arg1;
- (void)setLastSeenDate:(id)arg1;
- (void)setLastVisitedDate:(id)arg1;
- (void)writeToKeyValuePair:(id)arg1;

@end

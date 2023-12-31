
@interface SGMIMetricsSubmodelsStats : PBCodable <NSCopying> {
    SGMIMetricsSubmodelStats * _attachmentsStats;
    SGMIMetricsSubmodelStats * _conversationStats;
    SGMIMetricsSubmodelStats * _domainFromSenderStats;
    SGMIMetricsSubmodelStats * _listIdStats;
    SGMIMetricsSubmodelStats * _mailboxStats;
    SGMIMetricsSubmodelStats * _mailboxTypeStats;
    SGMIMetricsSubmodelStats * _personCCRecipientsStats;
    SGMIMetricsSubmodelStats * _personFromSenderInDyadicConversationStats;
    SGMIMetricsSubmodelStats * _personFromSenderStats;
    SGMIMetricsSubmodelStats * _personToRecipientsStats;
    SGMIMetricsSubmodelStats * _standardMailRulesStats;
    SGMIMetricsSubmodelStats * _subjectContentStats;
    SGMIMetricsSubmodelStats * _subjectCountStatsStats;
}

@property (nonatomic, retain) SGMIMetricsSubmodelStats *attachmentsStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *conversationStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *domainFromSenderStats;
@property (nonatomic, readonly) bool hasAttachmentsStats;
@property (nonatomic, readonly) bool hasConversationStats;
@property (nonatomic, readonly) bool hasDomainFromSenderStats;
@property (nonatomic, readonly) bool hasListIdStats;
@property (nonatomic, readonly) bool hasMailboxStats;
@property (nonatomic, readonly) bool hasMailboxTypeStats;
@property (nonatomic, readonly) bool hasPersonCCRecipientsStats;
@property (nonatomic, readonly) bool hasPersonFromSenderInDyadicConversationStats;
@property (nonatomic, readonly) bool hasPersonFromSenderStats;
@property (nonatomic, readonly) bool hasPersonToRecipientsStats;
@property (nonatomic, readonly) bool hasStandardMailRulesStats;
@property (nonatomic, readonly) bool hasSubjectContentStats;
@property (nonatomic, readonly) bool hasSubjectCountStatsStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *listIdStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *mailboxStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *mailboxTypeStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *personCCRecipientsStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *personFromSenderInDyadicConversationStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *personFromSenderStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *personToRecipientsStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *standardMailRulesStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *subjectContentStats;
@property (nonatomic, retain) SGMIMetricsSubmodelStats *subjectCountStatsStats;

- (void).cxx_destruct;
- (id)attachmentsStats;
- (id)conversationStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainFromSenderStats;
- (bool)hasAttachmentsStats;
- (bool)hasConversationStats;
- (bool)hasDomainFromSenderStats;
- (bool)hasListIdStats;
- (bool)hasMailboxStats;
- (bool)hasMailboxTypeStats;
- (bool)hasPersonCCRecipientsStats;
- (bool)hasPersonFromSenderInDyadicConversationStats;
- (bool)hasPersonFromSenderStats;
- (bool)hasPersonToRecipientsStats;
- (bool)hasStandardMailRulesStats;
- (bool)hasSubjectContentStats;
- (bool)hasSubjectCountStatsStats;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)listIdStats;
- (id)mailboxStats;
- (id)mailboxTypeStats;
- (void)mergeFrom:(id)arg1;
- (id)personCCRecipientsStats;
- (id)personFromSenderInDyadicConversationStats;
- (id)personFromSenderStats;
- (id)personToRecipientsStats;
- (bool)readFrom:(id)arg1;
- (void)setAttachmentsStats:(id)arg1;
- (void)setConversationStats:(id)arg1;
- (void)setDomainFromSenderStats:(id)arg1;
- (void)setListIdStats:(id)arg1;
- (void)setMailboxStats:(id)arg1;
- (void)setMailboxTypeStats:(id)arg1;
- (void)setPersonCCRecipientsStats:(id)arg1;
- (void)setPersonFromSenderInDyadicConversationStats:(id)arg1;
- (void)setPersonFromSenderStats:(id)arg1;
- (void)setPersonToRecipientsStats:(id)arg1;
- (void)setStandardMailRulesStats:(id)arg1;
- (void)setSubjectContentStats:(id)arg1;
- (void)setSubjectCountStatsStats:(id)arg1;
- (id)standardMailRulesStats;
- (id)subjectContentStats;
- (id)subjectCountStatsStats;
- (void)writeTo:(id)arg1;

@end

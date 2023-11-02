
@interface SGMIMetricsRegexSignatureStats : PBCodable <NSCopying> {
    struct { 
        unsigned int numberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20 : 1; 
        unsigned int numberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20 : 1; 
        unsigned int numberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20 : 1; 
        unsigned int numberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20 : 1; 
        unsigned int totalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20 : 1; 
        unsigned int totalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20 : 1; 
        unsigned int totalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20 : 1; 
    }  _has;
    NSString * _locale;
    unsigned int  _numberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
    unsigned int  _numberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
    unsigned int  _numberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
    unsigned int  _numberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
    NSMutableArray * _stats;
    unsigned int  _totalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20;
    unsigned int  _totalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20;
    unsigned int  _totalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20;
    SGMIMetricsTrialMetadata * _trialMetadata;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic) bool hasNumberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) bool hasNumberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) bool hasNumberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) bool hasNumberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) bool hasTotalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) bool hasTotalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) bool hasTotalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20;
@property (nonatomic, readonly) bool hasTrialMetadata;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) unsigned int numberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int numberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int numberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int numberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
@property (nonatomic, retain) NSMutableArray *stats;
@property (nonatomic) unsigned int totalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int totalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20;
@property (nonatomic) unsigned int totalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20;
@property (nonatomic, retain) SGMIMetricsTrialMetadata *trialMetadata;

+ (Class)statsType;

- (void).cxx_destruct;
- (void)addStats:(id)arg1;
- (void)clearStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (bool)hasNumberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
- (bool)hasNumberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
- (bool)hasNumberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
- (bool)hasNumberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
- (bool)hasTotalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20;
- (bool)hasTotalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20;
- (bool)hasTotalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20;
- (bool)hasTrialMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
- (unsigned int)numberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
- (unsigned int)numberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20;
- (unsigned int)numberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20;
- (bool)readFrom:(id)arg1;
- (void)setHasNumberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20:(bool)arg1;
- (void)setHasNumberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20:(bool)arg1;
- (void)setHasNumberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20:(bool)arg1;
- (void)setHasNumberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20:(bool)arg1;
- (void)setHasTotalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20:(bool)arg1;
- (void)setHasTotalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20:(bool)arg1;
- (void)setHasTotalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setNumberOfLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20:(unsigned int)arg1;
- (void)setNumberOfLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20:(unsigned int)arg1;
- (void)setNumberOfPredictedAttachmentOnLargeIncomingMailsWithAttachmentRoundedToClosestMultipleOf20:(unsigned int)arg1;
- (void)setNumberOfPredictedAttachmentOnLargeOutgoingMailsWithAttachmentRoundedToClosestMultipleOf20:(unsigned int)arg1;
- (void)setStats:(id)arg1;
- (void)setTotalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20:(unsigned int)arg1;
- (void)setTotalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20:(unsigned int)arg1;
- (void)setTotalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20:(unsigned int)arg1;
- (void)setTrialMetadata:(id)arg1;
- (id)stats;
- (id)statsAtIndex:(unsigned long long)arg1;
- (unsigned long long)statsCount;
- (unsigned int)totalNumberOfEmailsProcessedForAttachmentDetectionRoundedToClosestMultipleOf20;
- (unsigned int)totalNumberOfEmailsProcessedForFollowUpDetectionRoundedToClosestMultipleOf20;
- (unsigned int)totalNumberOfEmailsProcessedForRecipientDetectionRoundedToClosestMultipleOf20;
- (id)trialMetadata;
- (void)writeTo:(id)arg1;

@end

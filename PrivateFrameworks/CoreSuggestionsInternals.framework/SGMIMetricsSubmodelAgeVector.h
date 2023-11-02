
@interface SGMIMetricsSubmodelAgeVector : PBCodable <NSCopying> {
    float  _conversationAge;
    float  _domainFromSenderAge;
    struct { 
        unsigned int conversationAge : 1; 
        unsigned int domainFromSenderAge : 1; 
        unsigned int personCCRecipientsAge : 1; 
        unsigned int personFromSenderAge : 1; 
        unsigned int personFromSenderInDyadicConversationAge : 1; 
        unsigned int personToRecipientsAge : 1; 
        unsigned int subjectContentAge : 1; 
    }  _has;
    float  _personCCRecipientsAge;
    float  _personFromSenderAge;
    float  _personFromSenderInDyadicConversationAge;
    float  _personToRecipientsAge;
    float  _subjectContentAge;
}

@property (nonatomic) float conversationAge;
@property (nonatomic) float domainFromSenderAge;
@property (nonatomic) bool hasConversationAge;
@property (nonatomic) bool hasDomainFromSenderAge;
@property (nonatomic) bool hasPersonCCRecipientsAge;
@property (nonatomic) bool hasPersonFromSenderAge;
@property (nonatomic) bool hasPersonFromSenderInDyadicConversationAge;
@property (nonatomic) bool hasPersonToRecipientsAge;
@property (nonatomic) bool hasSubjectContentAge;
@property (nonatomic) float personCCRecipientsAge;
@property (nonatomic) float personFromSenderAge;
@property (nonatomic) float personFromSenderInDyadicConversationAge;
@property (nonatomic) float personToRecipientsAge;
@property (nonatomic) float subjectContentAge;

- (float)conversationAge;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)domainFromSenderAge;
- (bool)hasConversationAge;
- (bool)hasDomainFromSenderAge;
- (bool)hasPersonCCRecipientsAge;
- (bool)hasPersonFromSenderAge;
- (bool)hasPersonFromSenderInDyadicConversationAge;
- (bool)hasPersonToRecipientsAge;
- (bool)hasSubjectContentAge;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)personCCRecipientsAge;
- (float)personFromSenderAge;
- (float)personFromSenderInDyadicConversationAge;
- (float)personToRecipientsAge;
- (bool)readFrom:(id)arg1;
- (void)setConversationAge:(float)arg1;
- (void)setDomainFromSenderAge:(float)arg1;
- (void)setHasConversationAge:(bool)arg1;
- (void)setHasDomainFromSenderAge:(bool)arg1;
- (void)setHasPersonCCRecipientsAge:(bool)arg1;
- (void)setHasPersonFromSenderAge:(bool)arg1;
- (void)setHasPersonFromSenderInDyadicConversationAge:(bool)arg1;
- (void)setHasPersonToRecipientsAge:(bool)arg1;
- (void)setHasSubjectContentAge:(bool)arg1;
- (void)setPersonCCRecipientsAge:(float)arg1;
- (void)setPersonFromSenderAge:(float)arg1;
- (void)setPersonFromSenderInDyadicConversationAge:(float)arg1;
- (void)setPersonToRecipientsAge:(float)arg1;
- (void)setSubjectContentAge:(float)arg1;
- (float)subjectContentAge;
- (void)writeTo:(id)arg1;

@end

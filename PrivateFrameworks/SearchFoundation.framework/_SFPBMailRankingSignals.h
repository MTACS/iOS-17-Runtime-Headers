
@interface _SFPBMailRankingSignals : PBCodable <NSSecureCoding, _SFPBMailRankingSignals> {
    int  _averageEngagementAgeLast14Days;
    int  _averageEngagementAgeLast21Days;
    int  _averageEngagementAgeLast30Days;
    int  _averageEngagementAgeLast7Days;
    unsigned long long  _daysSinceReceipt;
    bool  _isFlagged;
    bool  _isRepliedTo;
    float  _l1Score;
    float  _l2Score;
    unsigned long long  _numDaysEngagedLast30Days;
    unsigned long long  _numEngagements;
    bool  _wasReorderedByRecency;
}

@property (nonatomic) int averageEngagementAgeLast14Days;
@property (nonatomic) int averageEngagementAgeLast21Days;
@property (nonatomic) int averageEngagementAgeLast30Days;
@property (nonatomic) int averageEngagementAgeLast7Days;
@property (nonatomic) unsigned long long daysSinceReceipt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFlagged;
@property (nonatomic) bool isRepliedTo;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float l1Score;
@property (nonatomic) float l2Score;
@property (nonatomic) unsigned long long numDaysEngagedLast30Days;
@property (nonatomic) unsigned long long numEngagements;
@property (readonly) Class superclass;
@property (nonatomic) bool wasReorderedByRecency;

- (int)averageEngagementAgeLast14Days;
- (int)averageEngagementAgeLast21Days;
- (int)averageEngagementAgeLast30Days;
- (int)averageEngagementAgeLast7Days;
- (unsigned long long)daysSinceReceipt;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFlagged;
- (bool)isRepliedTo;
- (id)jsonData;
- (float)l1Score;
- (float)l2Score;
- (unsigned long long)numDaysEngagedLast30Days;
- (unsigned long long)numEngagements;
- (bool)readFrom:(id)arg1;
- (void)setAverageEngagementAgeLast14Days:(int)arg1;
- (void)setAverageEngagementAgeLast21Days:(int)arg1;
- (void)setAverageEngagementAgeLast30Days:(int)arg1;
- (void)setAverageEngagementAgeLast7Days:(int)arg1;
- (void)setDaysSinceReceipt:(unsigned long long)arg1;
- (void)setIsFlagged:(bool)arg1;
- (void)setIsRepliedTo:(bool)arg1;
- (void)setL1Score:(float)arg1;
- (void)setL2Score:(float)arg1;
- (void)setNumDaysEngagedLast30Days:(unsigned long long)arg1;
- (void)setNumEngagements:(unsigned long long)arg1;
- (void)setWasReorderedByRecency:(bool)arg1;
- (bool)wasReorderedByRecency;
- (void)writeTo:(id)arg1;

@end

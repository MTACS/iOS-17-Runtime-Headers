
@interface SFMailRankingSignals : NSObject <NSCopying, NSSecureCoding, SFMailRankingSignals> {
    NSNumber * _averageEngagementAgeLast14Days;
    NSNumber * _averageEngagementAgeLast21Days;
    NSNumber * _averageEngagementAgeLast30Days;
    NSNumber * _averageEngagementAgeLast7Days;
    unsigned long long  _daysSinceReceipt;
    struct { 
        unsigned int wasReorderedByRecency : 1; 
        unsigned int numEngagements : 1; 
        unsigned int numDaysEngagedLast30Days : 1; 
        unsigned int daysSinceReceipt : 1; 
        unsigned int isFlagged : 1; 
        unsigned int isRepliedTo : 1; 
    }  _has;
    bool  _isFlagged;
    bool  _isRepliedTo;
    NSNumber * _l1Score;
    NSNumber * _l2Score;
    unsigned long long  _numDaysEngagedLast30Days;
    unsigned long long  _numEngagements;
    bool  _wasReorderedByRecency;
}

@property (nonatomic, copy) NSNumber *averageEngagementAgeLast14Days;
@property (nonatomic, copy) NSNumber *averageEngagementAgeLast21Days;
@property (nonatomic, copy) NSNumber *averageEngagementAgeLast30Days;
@property (nonatomic, copy) NSNumber *averageEngagementAgeLast7Days;
@property (nonatomic) unsigned long long daysSinceReceipt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFlagged;
@property (nonatomic) bool isRepliedTo;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSNumber *l1Score;
@property (nonatomic, copy) NSNumber *l2Score;
@property (nonatomic) unsigned long long numDaysEngagedLast30Days;
@property (nonatomic) unsigned long long numEngagements;
@property (readonly) Class superclass;
@property (nonatomic) bool wasReorderedByRecency;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)averageEngagementAgeLast14Days;
- (id)averageEngagementAgeLast21Days;
- (id)averageEngagementAgeLast30Days;
- (id)averageEngagementAgeLast7Days;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)daysSinceReceipt;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDaysSinceReceipt;
- (bool)hasIsFlagged;
- (bool)hasIsRepliedTo;
- (bool)hasNumDaysEngagedLast30Days;
- (bool)hasNumEngagements;
- (bool)hasWasReorderedByRecency;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFlagged;
- (bool)isRepliedTo;
- (id)jsonData;
- (id)l1Score;
- (id)l2Score;
- (unsigned long long)numDaysEngagedLast30Days;
- (unsigned long long)numEngagements;
- (void)setAverageEngagementAgeLast14Days:(id)arg1;
- (void)setAverageEngagementAgeLast21Days:(id)arg1;
- (void)setAverageEngagementAgeLast30Days:(id)arg1;
- (void)setAverageEngagementAgeLast7Days:(id)arg1;
- (void)setDaysSinceReceipt:(unsigned long long)arg1;
- (void)setIsFlagged:(bool)arg1;
- (void)setIsRepliedTo:(bool)arg1;
- (void)setL1Score:(id)arg1;
- (void)setL2Score:(id)arg1;
- (void)setNumDaysEngagedLast30Days:(unsigned long long)arg1;
- (void)setNumEngagements:(unsigned long long)arg1;
- (void)setWasReorderedByRecency:(bool)arg1;
- (bool)wasReorderedByRecency;

@end

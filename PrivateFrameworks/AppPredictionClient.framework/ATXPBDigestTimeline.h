
@interface ATXPBDigestTimeline : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    double  _digestRemovedTimestamp;
    double  _firstCollapsedViewTimestamp;
    double  _firstScheduledViewTimestamp;
    double  _firstUpcomingViewTimestamp;
    struct { 
        unsigned int digestRemovedTimestamp : 1; 
        unsigned int firstCollapsedViewTimestamp : 1; 
        unsigned int firstScheduledViewTimestamp : 1; 
        unsigned int firstUpcomingViewTimestamp : 1; 
    }  _has;
}

@property (nonatomic) double digestRemovedTimestamp;
@property (nonatomic) double firstCollapsedViewTimestamp;
@property (nonatomic) double firstScheduledViewTimestamp;
@property (nonatomic) double firstUpcomingViewTimestamp;
@property (nonatomic) bool hasDigestRemovedTimestamp;
@property (nonatomic) bool hasFirstCollapsedViewTimestamp;
@property (nonatomic) bool hasFirstScheduledViewTimestamp;
@property (nonatomic) bool hasFirstUpcomingViewTimestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)digestRemovedTimestamp;
- (double)firstCollapsedViewTimestamp;
- (double)firstScheduledViewTimestamp;
- (double)firstUpcomingViewTimestamp;
- (bool)hasDigestRemovedTimestamp;
- (bool)hasFirstCollapsedViewTimestamp;
- (bool)hasFirstScheduledViewTimestamp;
- (bool)hasFirstUpcomingViewTimestamp;
- (unsigned long long)hash;
- (id)initFromJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDigestRemovedTimestamp:(double)arg1;
- (void)setFirstCollapsedViewTimestamp:(double)arg1;
- (void)setFirstScheduledViewTimestamp:(double)arg1;
- (void)setFirstUpcomingViewTimestamp:(double)arg1;
- (void)setHasDigestRemovedTimestamp:(bool)arg1;
- (void)setHasFirstCollapsedViewTimestamp:(bool)arg1;
- (void)setHasFirstScheduledViewTimestamp:(bool)arg1;
- (void)setHasFirstUpcomingViewTimestamp:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

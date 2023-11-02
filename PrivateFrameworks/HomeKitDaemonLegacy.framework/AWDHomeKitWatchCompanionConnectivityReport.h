
@interface AWDHomeKitWatchCompanionConnectivityReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int numWatchAddEvents : 1; 
        unsigned int numWatchRemoveEvents : 1; 
        unsigned int reportComplete : 1; 
    }  _has;
    unsigned int  _numWatchAddEvents;
    unsigned int  _numWatchRemoveEvents;
    bool  _reportComplete;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasNumWatchAddEvents;
@property (nonatomic) bool hasNumWatchRemoveEvents;
@property (nonatomic) bool hasReportComplete;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int numWatchAddEvents;
@property (nonatomic) unsigned int numWatchRemoveEvents;
@property (nonatomic) bool reportComplete;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumWatchAddEvents;
- (bool)hasNumWatchRemoveEvents;
- (bool)hasReportComplete;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numWatchAddEvents;
- (unsigned int)numWatchRemoveEvents;
- (bool)readFrom:(id)arg1;
- (bool)reportComplete;
- (void)setHasNumWatchAddEvents:(bool)arg1;
- (void)setHasNumWatchRemoveEvents:(bool)arg1;
- (void)setHasReportComplete:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumWatchAddEvents:(unsigned int)arg1;
- (void)setNumWatchRemoveEvents:(unsigned int)arg1;
- (void)setReportComplete:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

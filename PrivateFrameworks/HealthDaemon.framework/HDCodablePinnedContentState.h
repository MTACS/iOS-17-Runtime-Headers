
@interface HDCodablePinnedContentState : PBCodable <NSCopying> {
    long long  _epoch;
    struct { 
        unsigned int epoch : 1; 
    }  _has;
    NSData * _pinnedContentStateData;
}

@property (nonatomic) long long epoch;
@property (nonatomic) bool hasEpoch;
@property (nonatomic, readonly) bool hasPinnedContentStateData;
@property (nonatomic, retain) NSData *pinnedContentStateData;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)epoch;
- (bool)hasEpoch;
- (bool)hasPinnedContentStateData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pinnedContentStateData;
- (bool)readFrom:(id)arg1;
- (void)setEpoch:(long long)arg1;
- (void)setHasEpoch:(bool)arg1;
- (void)setPinnedContentStateData:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthAppHealthDaemonSupport.framework/HealthAppHealthDaemonSupport

- (bool)isEqual:(id)arg1;

@end

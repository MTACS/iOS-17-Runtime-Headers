
@interface ASCodableCloudKitCompetition : PBCodable <NSCopying> {
    long long  _currentCacheIndex;
    ASCodableCloudKitDateComponents * _durationDateComponents;
    struct { 
        unsigned int currentCacheIndex : 1; 
        unsigned int maximumNumberOfPointsPerDay : 1; 
    }  _has;
    long long  _maximumNumberOfPointsPerDay;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _opponentScores;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _preferredVictoryBadgeStyles;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _scores;
    ASCodableCloudKitDateComponents * _startDateComponents;
    NSData * _uuid;
}

@property (nonatomic) long long currentCacheIndex;
@property (nonatomic, retain) ASCodableCloudKitDateComponents *durationDateComponents;
@property (nonatomic) bool hasCurrentCacheIndex;
@property (nonatomic, readonly) bool hasDurationDateComponents;
@property (nonatomic) bool hasMaximumNumberOfPointsPerDay;
@property (nonatomic, readonly) bool hasStartDateComponents;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) long long maximumNumberOfPointsPerDay;
@property (nonatomic, readonly) long long*opponentScores;
@property (nonatomic, readonly) unsigned long long opponentScoresCount;
@property (nonatomic, readonly) int*preferredVictoryBadgeStyles;
@property (nonatomic, readonly) unsigned long long preferredVictoryBadgeStylesCount;
@property (nonatomic, readonly) long long*scores;
@property (nonatomic, readonly) unsigned long long scoresCount;
@property (nonatomic, retain) ASCodableCloudKitDateComponents *startDateComponents;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (void)addOpponentScores:(long long)arg1;
- (void)addPreferredVictoryBadgeStyles:(int)arg1;
- (void)addScores:(long long)arg1;
- (void)clearOpponentScores;
- (void)clearPreferredVictoryBadgeStyles;
- (void)clearScores;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentCacheIndex;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)durationDateComponents;
- (bool)hasCurrentCacheIndex;
- (bool)hasDurationDateComponents;
- (bool)hasMaximumNumberOfPointsPerDay;
- (bool)hasStartDateComponents;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfPointsPerDay;
- (void)mergeFrom:(id)arg1;
- (long long*)opponentScores;
- (long long)opponentScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)opponentScoresCount;
- (int*)preferredVictoryBadgeStyles;
- (int)preferredVictoryBadgeStylesAtIndex:(unsigned long long)arg1;
- (unsigned long long)preferredVictoryBadgeStylesCount;
- (bool)readFrom:(id)arg1;
- (long long*)scores;
- (long long)scoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)scoresCount;
- (void)setCurrentCacheIndex:(long long)arg1;
- (void)setDurationDateComponents:(id)arg1;
- (void)setHasCurrentCacheIndex:(bool)arg1;
- (void)setHasMaximumNumberOfPointsPerDay:(bool)arg1;
- (void)setMaximumNumberOfPointsPerDay:(long long)arg1;
- (void)setOpponentScores:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setPreferredVictoryBadgeStyles:(int*)arg1 count:(unsigned long long)arg2;
- (void)setScores:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setStartDateComponents:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)startDateComponents;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end

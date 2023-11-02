
@interface PSESchemaPSEMedia : SISchemaInstrumentationMessage {
    struct { 
        unsigned int playDurationInSeconds : 1; 
        unsigned int mediaContentDurationBucket : 1; 
    }  _has;
    bool  _hasLastMediaUserFollowupAction;
    PSESchemaPSEMediaUserFollowupAction * _lastMediaUserFollowupAction;
    int  _mediaContentDurationBucket;
    double  _playDurationInSeconds;
}

@property (nonatomic) bool hasLastMediaUserFollowupAction;
@property (nonatomic) bool hasMediaContentDurationBucket;
@property (nonatomic) bool hasPlayDurationInSeconds;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PSESchemaPSEMediaUserFollowupAction *lastMediaUserFollowupAction;
@property (nonatomic) int mediaContentDurationBucket;
@property (nonatomic) double playDurationInSeconds;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLastMediaUserFollowupAction;
- (void)deleteMediaContentDurationBucket;
- (void)deletePlayDurationInSeconds;
- (id)dictionaryRepresentation;
- (bool)hasLastMediaUserFollowupAction;
- (bool)hasMediaContentDurationBucket;
- (bool)hasPlayDurationInSeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)lastMediaUserFollowupAction;
- (int)mediaContentDurationBucket;
- (double)playDurationInSeconds;
- (bool)readFrom:(id)arg1;
- (void)setHasLastMediaUserFollowupAction:(bool)arg1;
- (void)setHasMediaContentDurationBucket:(bool)arg1;
- (void)setHasPlayDurationInSeconds:(bool)arg1;
- (void)setLastMediaUserFollowupAction:(id)arg1;
- (void)setMediaContentDurationBucket:(int)arg1;
- (void)setPlayDurationInSeconds:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

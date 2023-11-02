
@interface NTPBScoreProfiles : PBCodable <NSCopying> {
    NTPBScoreProfile * _defaultScoreProfile;
    NTPBScoreProfile * _forYouGroupScoreProfile;
}

@property (nonatomic, retain) NTPBScoreProfile *defaultScoreProfile;
@property (nonatomic, retain) NTPBScoreProfile *forYouGroupScoreProfile;
@property (nonatomic, readonly) bool hasDefaultScoreProfile;
@property (nonatomic, readonly) bool hasForYouGroupScoreProfile;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultScoreProfile;
- (id)description;
- (id)dictionaryRepresentation;
- (id)forYouGroupScoreProfile;
- (bool)hasDefaultScoreProfile;
- (bool)hasForYouGroupScoreProfile;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDefaultScoreProfile:(id)arg1;
- (void)setForYouGroupScoreProfile:(id)arg1;
- (void)writeTo:(id)arg1;

@end

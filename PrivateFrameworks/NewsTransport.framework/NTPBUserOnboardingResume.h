
@interface NTPBUserOnboardingResume : PBCodable <NSCopying> {
    NSString * _onboardResumeStage;
}

@property (nonatomic, readonly) bool hasOnboardResumeStage;
@property (nonatomic, retain) NSString *onboardResumeStage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOnboardResumeStage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)onboardResumeStage;
- (bool)readFrom:(id)arg1;
- (void)setOnboardResumeStage:(id)arg1;
- (void)writeTo:(id)arg1;

@end

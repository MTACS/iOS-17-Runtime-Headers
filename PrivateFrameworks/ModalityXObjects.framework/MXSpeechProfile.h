
@interface MXSpeechProfile : PBCodable <NSCopying> {
    struct { 
        unsigned int moreDataFollows : 1; 
    }  _has;
    NSData * _languageProfile;
    bool  _moreDataFollows;
}

@property (nonatomic, readonly) bool hasLanguageProfile;
@property (nonatomic) bool hasMoreDataFollows;
@property (nonatomic, retain) NSData *languageProfile;
@property (nonatomic) bool moreDataFollows;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLanguageProfile;
- (bool)hasMoreDataFollows;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageProfile;
- (void)mergeFrom:(id)arg1;
- (bool)moreDataFollows;
- (bool)readFrom:(id)arg1;
- (void)setHasMoreDataFollows:(bool)arg1;
- (void)setLanguageProfile:(id)arg1;
- (void)setMoreDataFollows:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

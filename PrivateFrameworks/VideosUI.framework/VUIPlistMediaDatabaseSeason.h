
@interface VUIPlistMediaDatabaseSeason : VUIPlistMediaDatabaseEntity <NSCopying> {
    NSArray * _episodes;
    NSNumber * _seasonNumber;
    VUIPlistMediaDatabaseShow * _show;
}

@property (nonatomic, copy) NSArray *episodes;
@property (nonatomic, copy) NSNumber *seasonNumber;
@property (nonatomic) VUIPlistMediaDatabaseShow *show;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)episodeForIdentifier:(id)arg1;
- (id)episodes;
- (id)initWithDictionary:(id)arg1 show:(id)arg2;
- (id)initWithIdentifier:(id)arg1 show:(id)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)isLocal;
- (id)seasonNumber;
- (void)setEpisodes:(id)arg1;
- (void)setSeasonNumber:(id)arg1;
- (void)setShow:(id)arg1;
- (id)show;

@end

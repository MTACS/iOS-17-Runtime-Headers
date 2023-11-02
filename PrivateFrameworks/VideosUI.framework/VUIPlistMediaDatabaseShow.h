
@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying> {
    NSArray * _seasons;
}

@property (nonatomic, retain) NSArray *seasons;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)isLocal;
- (id)seasonForIdentifier:(id)arg1;
- (id)seasons;
- (void)setSeasons:(id)arg1;

@end

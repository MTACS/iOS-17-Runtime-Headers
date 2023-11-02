
@interface ATXPBRequestForIntentSuggestions : PBCodable <NSCopying> {
    ATXPBRequestForSuggestions * _base;
    NSMutableArray * _bundleIds;
    struct { 
        unsigned int limit : 1; 
    }  _has;
    NSMutableArray * _intentClassNames;
    int  _limit;
}

@property (nonatomic, retain) ATXPBRequestForSuggestions *base;
@property (nonatomic, retain) NSMutableArray *bundleIds;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic) bool hasLimit;
@property (nonatomic, retain) NSMutableArray *intentClassNames;
@property (nonatomic) int limit;

+ (Class)bundleIdsType;
+ (Class)intentClassNamesType;

- (void).cxx_destruct;
- (void)addBundleIds:(id)arg1;
- (void)addIntentClassNames:(id)arg1;
- (id)base;
- (id)bundleIds;
- (id)bundleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;
- (void)clearIntentClassNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBase;
- (bool)hasLimit;
- (unsigned long long)hash;
- (id)intentClassNames;
- (id)intentClassNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentClassNamesCount;
- (bool)isEqual:(id)arg1;
- (int)limit;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setBundleIds:(id)arg1;
- (void)setHasLimit:(bool)arg1;
- (void)setIntentClassNames:(id)arg1;
- (void)setLimit:(int)arg1;
- (void)writeTo:(id)arg1;

@end

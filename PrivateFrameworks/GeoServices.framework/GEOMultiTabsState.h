
@interface GEOMultiTabsState : PBCodable <NSCopying> {
    unsigned int  _currentTabIndex;
    struct { 
        unsigned int has_currentTabIndex : 1; 
        unsigned int has_numberOfTabsOpen : 1; 
    }  _flags;
    unsigned int  _numberOfTabsOpen;
}

@property (nonatomic) unsigned int currentTabIndex;
@property (nonatomic) bool hasCurrentTabIndex;
@property (nonatomic) bool hasNumberOfTabsOpen;
@property (nonatomic) unsigned int numberOfTabsOpen;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentTabIndex;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTabIndex;
- (bool)hasNumberOfTabsOpen;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfTabsOpen;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentTabIndex:(unsigned int)arg1;
- (void)setHasCurrentTabIndex:(bool)arg1;
- (void)setHasNumberOfTabsOpen:(bool)arg1;
- (void)setNumberOfTabsOpen:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end

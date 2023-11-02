
@interface NACListeningModesMessage : PBCodable <NSCopying> {
    NSMutableArray * _availableListeningModes;
    NSString * _category;
    NSString * _currentListeningMode;
    NSData * _error;
    struct { 
        unsigned int originIdentifier : 1; 
    }  _has;
    int  _originIdentifier;
}

@property (nonatomic, retain) NSMutableArray *availableListeningModes;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *currentListeningMode;
@property (nonatomic, retain) NSData *error;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasCurrentListeningMode;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

+ (Class)availableListeningModeType;

- (void).cxx_destruct;
- (void)addAvailableListeningMode:(id)arg1;
- (id)availableListeningModeAtIndex:(unsigned long long)arg1;
- (id)availableListeningModes;
- (unsigned long long)availableListeningModesCount;
- (id)category;
- (void)clearAvailableListeningModes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentListeningMode;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasCategory;
- (bool)hasCurrentListeningMode;
- (bool)hasError;
- (bool)hasOriginIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)originIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAvailableListeningModes:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCurrentListeningMode:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end

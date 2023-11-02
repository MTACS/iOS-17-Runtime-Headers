
@interface SISchemaHomeKitAccessoryResponse : SISchemaInstrumentationMessage {
    struct { 
        unsigned int homeKitAccessoryType : 1; 
        unsigned int numAccessoriesCompleted : 1; 
        unsigned int numAccessoriesNotCompleted : 1; 
    }  _has;
    int  _homeKitAccessoryType;
    int  _numAccessoriesCompleted;
    int  _numAccessoriesNotCompleted;
}

@property (nonatomic) bool hasHomeKitAccessoryType;
@property (nonatomic) bool hasNumAccessoriesCompleted;
@property (nonatomic) bool hasNumAccessoriesNotCompleted;
@property (nonatomic) int homeKitAccessoryType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int numAccessoriesCompleted;
@property (nonatomic) int numAccessoriesNotCompleted;

- (void)deleteHomeKitAccessoryType;
- (void)deleteNumAccessoriesCompleted;
- (void)deleteNumAccessoriesNotCompleted;
- (id)dictionaryRepresentation;
- (bool)hasHomeKitAccessoryType;
- (bool)hasNumAccessoriesCompleted;
- (bool)hasNumAccessoriesNotCompleted;
- (unsigned long long)hash;
- (int)homeKitAccessoryType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)numAccessoriesCompleted;
- (int)numAccessoriesNotCompleted;
- (bool)readFrom:(id)arg1;
- (void)setHasHomeKitAccessoryType:(bool)arg1;
- (void)setHasNumAccessoriesCompleted:(bool)arg1;
- (void)setHasNumAccessoriesNotCompleted:(bool)arg1;
- (void)setHomeKitAccessoryType:(int)arg1;
- (void)setNumAccessoriesCompleted:(int)arg1;
- (void)setNumAccessoriesNotCompleted:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

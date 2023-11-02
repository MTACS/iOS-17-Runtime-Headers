
@interface SISchemaDeviceLockStateChanged : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isDeviceLocked : 1; 
    }  _has;
    bool  _isDeviceLocked;
}

@property (nonatomic) bool hasIsDeviceLocked;
@property (nonatomic) bool isDeviceLocked;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsDeviceLocked;
- (id)dictionaryRepresentation;
- (bool)hasIsDeviceLocked;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDeviceLocked;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDeviceLocked:(bool)arg1;
- (void)setIsDeviceLocked:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

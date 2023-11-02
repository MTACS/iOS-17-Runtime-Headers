
@interface SISchemaUEISiriCarCommandStarted : SISchemaInstrumentationMessage {
    int  _carPlayConnection;
    struct { 
        unsigned int carPlayConnection : 1; 
        unsigned int isEnhancedSiriEnabled : 1; 
        unsigned int isEnhancedSiriRequest : 1; 
    }  _has;
    bool  _isEnhancedSiriEnabled;
    bool  _isEnhancedSiriRequest;
}

@property (nonatomic) int carPlayConnection;
@property (nonatomic) bool hasCarPlayConnection;
@property (nonatomic) bool hasIsEnhancedSiriEnabled;
@property (nonatomic) bool hasIsEnhancedSiriRequest;
@property (nonatomic) bool isEnhancedSiriEnabled;
@property (nonatomic) bool isEnhancedSiriRequest;
@property (nonatomic, readonly) NSData *jsonData;

- (int)carPlayConnection;
- (void)deleteCarPlayConnection;
- (void)deleteIsEnhancedSiriEnabled;
- (void)deleteIsEnhancedSiriRequest;
- (id)dictionaryRepresentation;
- (bool)hasCarPlayConnection;
- (bool)hasIsEnhancedSiriEnabled;
- (bool)hasIsEnhancedSiriRequest;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEnhancedSiriEnabled;
- (bool)isEnhancedSiriRequest;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCarPlayConnection:(int)arg1;
- (void)setHasCarPlayConnection:(bool)arg1;
- (void)setHasIsEnhancedSiriEnabled:(bool)arg1;
- (void)setHasIsEnhancedSiriRequest:(bool)arg1;
- (void)setIsEnhancedSiriEnabled:(bool)arg1;
- (void)setIsEnhancedSiriRequest:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

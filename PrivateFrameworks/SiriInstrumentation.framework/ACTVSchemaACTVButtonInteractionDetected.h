
@interface ACTVSchemaACTVButtonInteractionDetected : SISchemaInstrumentationMessage {
    int  _buttonInteractionType;
    NSString * _buttonName;
    struct { 
        unsigned int buttonInteractionType : 1; 
    }  _has;
    bool  _hasButtonName;
}

@property (nonatomic) int buttonInteractionType;
@property (nonatomic, copy) NSString *buttonName;
@property (nonatomic) bool hasButtonInteractionType;
@property (nonatomic) bool hasButtonName;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (int)buttonInteractionType;
- (id)buttonName;
- (void)deleteButtonInteractionType;
- (void)deleteButtonName;
- (id)dictionaryRepresentation;
- (bool)hasButtonInteractionType;
- (bool)hasButtonName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setButtonInteractionType:(int)arg1;
- (void)setButtonName:(id)arg1;
- (void)setHasButtonInteractionType:(bool)arg1;
- (void)setHasButtonName:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

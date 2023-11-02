
@interface SISchemaCardSectionKeyboardInvocationContext : SISchemaInstrumentationMessage {
    bool  _existingText;
    struct { 
        unsigned int keyboardPresented : 1; 
        unsigned int keyboardLocale : 1; 
        unsigned int existingText : 1; 
    }  _has;
    int  _keyboardLocale;
    bool  _keyboardPresented;
}

@property (nonatomic) bool existingText;
@property (nonatomic) bool hasExistingText;
@property (nonatomic) bool hasKeyboardLocale;
@property (nonatomic) bool hasKeyboardPresented;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int keyboardLocale;
@property (nonatomic) bool keyboardPresented;

- (void)deleteExistingText;
- (void)deleteKeyboardLocale;
- (void)deleteKeyboardPresented;
- (id)dictionaryRepresentation;
- (bool)existingText;
- (bool)hasExistingText;
- (bool)hasKeyboardLocale;
- (bool)hasKeyboardPresented;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)keyboardLocale;
- (bool)keyboardPresented;
- (bool)readFrom:(id)arg1;
- (void)setExistingText:(bool)arg1;
- (void)setHasExistingText:(bool)arg1;
- (void)setHasKeyboardLocale:(bool)arg1;
- (void)setHasKeyboardPresented:(bool)arg1;
- (void)setKeyboardLocale:(int)arg1;
- (void)setKeyboardPresented:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

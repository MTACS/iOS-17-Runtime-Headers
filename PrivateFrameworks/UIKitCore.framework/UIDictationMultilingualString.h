
@interface UIDictationMultilingualString : NSObject {
    id  _correctionIdentifier;
    NSString * _dominantLanguage;
    NSString * _interactionIdentifier;
    NSArray * _phrases;
    NSString * _text;
}

@property (nonatomic, retain) id correctionIdentifier;
@property (nonatomic, copy) NSString *dominantLanguage;
@property (nonatomic, retain) NSString *interactionIdentifier;
@property (nonatomic, copy) NSArray *phrases;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctionIdentifier;
- (id)description;
- (id)dictionaryValue;
- (id)dominantLanguage;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithText:(id)arg1 forLanguage:(id)arg2;
- (id)interactionIdentifier;
- (bool)isEqual:(id)arg1;
- (id)phrases;
- (void)setCorrectionIdentifier:(id)arg1;
- (void)setDominantLanguage:(id)arg1;
- (void)setInteractionIdentifier:(id)arg1;
- (void)setPhrases:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end

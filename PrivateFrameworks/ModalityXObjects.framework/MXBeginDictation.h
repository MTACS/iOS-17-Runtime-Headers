
@interface MXBeginDictation : PBCodable <NSCopying> {
    NSData * _activationToken;
    NSString * _applicationName;
    NSString * _applicationVersion;
    MXAudioMetadata * _audioMetadata;
    bool  _censorSpeech;
    bool  _enablePartialResults;
    NSString * _fieldId;
    NSString * _fieldLabel;
    struct { 
        unsigned int inputOrigin : 1; 
        unsigned int keyboardReturnKey : 1; 
        unsigned int keyboardType : 1; 
        unsigned int censorSpeech : 1; 
        unsigned int enablePartialResults : 1; 
        unsigned int isAutoPunctuationEnabled : 1; 
        unsigned int saveRequestAudio : 1; 
        unsigned int speakerIndependentRecognition : 1; 
    }  _has;
    NSMutableArray * _inlineLmeItems;
    int  _inputOrigin;
    bool  _isAutoPunctuationEnabled;
    NSString * _keyboardIdentifier;
    int  _keyboardReturnKey;
    int  _keyboardType;
    NSMutableArray * _languages;
    NSString * _postfixText;
    NSString * _prefixText;
    NSString * _region;
    NSString * _requestId;
    bool  _saveRequestAudio;
    NSString * _selectedText;
    bool  _speakerIndependentRecognition;
}

@property (nonatomic, retain) NSData *activationToken;
@property (nonatomic, retain) NSString *applicationName;
@property (nonatomic, retain) NSString *applicationVersion;
@property (nonatomic, retain) MXAudioMetadata *audioMetadata;
@property (nonatomic) bool censorSpeech;
@property (nonatomic) bool enablePartialResults;
@property (nonatomic, retain) NSString *fieldId;
@property (nonatomic, retain) NSString *fieldLabel;
@property (nonatomic, readonly) bool hasActivationToken;
@property (nonatomic, readonly) bool hasApplicationName;
@property (nonatomic, readonly) bool hasApplicationVersion;
@property (nonatomic, readonly) bool hasAudioMetadata;
@property (nonatomic) bool hasCensorSpeech;
@property (nonatomic) bool hasEnablePartialResults;
@property (nonatomic, readonly) bool hasFieldId;
@property (nonatomic, readonly) bool hasFieldLabel;
@property (nonatomic) bool hasInputOrigin;
@property (nonatomic) bool hasIsAutoPunctuationEnabled;
@property (nonatomic, readonly) bool hasKeyboardIdentifier;
@property (nonatomic) bool hasKeyboardReturnKey;
@property (nonatomic) bool hasKeyboardType;
@property (nonatomic, readonly) bool hasPostfixText;
@property (nonatomic, readonly) bool hasPrefixText;
@property (nonatomic, readonly) bool hasRegion;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic) bool hasSaveRequestAudio;
@property (nonatomic, readonly) bool hasSelectedText;
@property (nonatomic) bool hasSpeakerIndependentRecognition;
@property (nonatomic, retain) NSMutableArray *inlineLmeItems;
@property (nonatomic) int inputOrigin;
@property (nonatomic) bool isAutoPunctuationEnabled;
@property (nonatomic, retain) NSString *keyboardIdentifier;
@property (nonatomic) int keyboardReturnKey;
@property (nonatomic) int keyboardType;
@property (nonatomic, retain) NSMutableArray *languages;
@property (nonatomic, retain) NSString *postfixText;
@property (nonatomic, retain) NSString *prefixText;
@property (nonatomic, retain) NSString *region;
@property (nonatomic, retain) NSString *requestId;
@property (nonatomic) bool saveRequestAudio;
@property (nonatomic, retain) NSString *selectedText;
@property (nonatomic) bool speakerIndependentRecognition;

+ (Class)inlineLmeItemsType;
+ (Class)languagesType;

- (void).cxx_destruct;
- (int)StringAsInputOrigin:(id)arg1;
- (int)StringAsKeyboardReturnKey:(id)arg1;
- (int)StringAsKeyboardType:(id)arg1;
- (id)activationToken;
- (void)addInlineLmeItems:(id)arg1;
- (void)addLanguages:(id)arg1;
- (id)applicationName;
- (id)applicationVersion;
- (id)audioMetadata;
- (bool)censorSpeech;
- (void)clearInlineLmeItems;
- (void)clearLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enablePartialResults;
- (id)fieldId;
- (id)fieldLabel;
- (bool)hasActivationToken;
- (bool)hasApplicationName;
- (bool)hasApplicationVersion;
- (bool)hasAudioMetadata;
- (bool)hasCensorSpeech;
- (bool)hasEnablePartialResults;
- (bool)hasFieldId;
- (bool)hasFieldLabel;
- (bool)hasInputOrigin;
- (bool)hasIsAutoPunctuationEnabled;
- (bool)hasKeyboardIdentifier;
- (bool)hasKeyboardReturnKey;
- (bool)hasKeyboardType;
- (bool)hasPostfixText;
- (bool)hasPrefixText;
- (bool)hasRegion;
- (bool)hasRequestId;
- (bool)hasSaveRequestAudio;
- (bool)hasSelectedText;
- (bool)hasSpeakerIndependentRecognition;
- (unsigned long long)hash;
- (id)inlineLmeItems;
- (id)inlineLmeItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)inlineLmeItemsCount;
- (int)inputOrigin;
- (id)inputOriginAsString:(int)arg1;
- (bool)isAutoPunctuationEnabled;
- (bool)isEqual:(id)arg1;
- (id)keyboardIdentifier;
- (int)keyboardReturnKey;
- (id)keyboardReturnKeyAsString:(int)arg1;
- (int)keyboardType;
- (id)keyboardTypeAsString:(int)arg1;
- (id)languages;
- (id)languagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)languagesCount;
- (void)mergeFrom:(id)arg1;
- (id)postfixText;
- (id)prefixText;
- (bool)readFrom:(id)arg1;
- (id)region;
- (id)requestId;
- (bool)saveRequestAudio;
- (id)selectedText;
- (void)setActivationToken:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setAudioMetadata:(id)arg1;
- (void)setCensorSpeech:(bool)arg1;
- (void)setEnablePartialResults:(bool)arg1;
- (void)setFieldId:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setHasCensorSpeech:(bool)arg1;
- (void)setHasEnablePartialResults:(bool)arg1;
- (void)setHasInputOrigin:(bool)arg1;
- (void)setHasIsAutoPunctuationEnabled:(bool)arg1;
- (void)setHasKeyboardReturnKey:(bool)arg1;
- (void)setHasKeyboardType:(bool)arg1;
- (void)setHasSaveRequestAudio:(bool)arg1;
- (void)setHasSpeakerIndependentRecognition:(bool)arg1;
- (void)setInlineLmeItems:(id)arg1;
- (void)setInputOrigin:(int)arg1;
- (void)setIsAutoPunctuationEnabled:(bool)arg1;
- (void)setKeyboardIdentifier:(id)arg1;
- (void)setKeyboardReturnKey:(int)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setLanguages:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setSaveRequestAudio:(bool)arg1;
- (void)setSelectedText:(id)arg1;
- (void)setSpeakerIndependentRecognition:(bool)arg1;
- (bool)speakerIndependentRecognition;
- (void)writeTo:(id)arg1;

@end

@interface MXBeginRequest : PBRequest <NSCopying> {
    MXAudioMetadata * _audioMetadata;
    bool  _enablePartialResults;
    NSString * _foregroundAppId;
    struct { 
        unsigned int inputOrigin : 1; 
        unsigned int enablePartialResults : 1; 
        unsigned int isAutoPunctuationEnabled : 1; 
        unsigned int isPromptedConfirmation : 1; 
        unsigned int isPromptedDictation : 1; 
    }  _has;
    NSMutableArray * _inlineLmeItems;
    int  _inputOrigin;
    bool  _isAutoPunctuationEnabled;
    bool  _isPromptedConfirmation;
    bool  _isPromptedDictation;
    NSString * _requestId;
}

@property (nonatomic, retain) MXAudioMetadata *audioMetadata;
@property (nonatomic) bool enablePartialResults;
@property (nonatomic, retain) NSString *foregroundAppId;
@property (nonatomic, readonly) bool hasAudioMetadata;
@property (nonatomic) bool hasEnablePartialResults;
@property (nonatomic, readonly) bool hasForegroundAppId;
@property (nonatomic) bool hasInputOrigin;
@property (nonatomic) bool hasIsAutoPunctuationEnabled;
@property (nonatomic) bool hasIsPromptedConfirmation;
@property (nonatomic) bool hasIsPromptedDictation;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, retain) NSMutableArray *inlineLmeItems;
@property (nonatomic) int inputOrigin;
@property (nonatomic) bool isAutoPunctuationEnabled;
@property (nonatomic) bool isPromptedConfirmation;
@property (nonatomic) bool isPromptedDictation;
@property (nonatomic, retain) NSString *requestId;

+ (Class)inlineLmeItemsType;

- (void).cxx_destruct;
- (int)StringAsInputOrigin:(id)arg1;
- (void)addInlineLmeItems:(id)arg1;
- (id)audioMetadata;
- (void)clearInlineLmeItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enablePartialResults;
- (id)foregroundAppId;
- (bool)hasAudioMetadata;
- (bool)hasEnablePartialResults;
- (bool)hasForegroundAppId;
- (bool)hasInputOrigin;
- (bool)hasIsAutoPunctuationEnabled;
- (bool)hasIsPromptedConfirmation;
- (bool)hasIsPromptedDictation;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (id)inlineLmeItems;
- (id)inlineLmeItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)inlineLmeItemsCount;
- (int)inputOrigin;
- (id)inputOriginAsString:(int)arg1;
- (bool)isAutoPunctuationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isPromptedConfirmation;
- (bool)isPromptedDictation;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setAudioMetadata:(id)arg1;
- (void)setEnablePartialResults:(bool)arg1;
- (void)setForegroundAppId:(id)arg1;
- (void)setHasEnablePartialResults:(bool)arg1;
- (void)setHasInputOrigin:(bool)arg1;
- (void)setHasIsAutoPunctuationEnabled:(bool)arg1;
- (void)setHasIsPromptedConfirmation:(bool)arg1;
- (void)setHasIsPromptedDictation:(bool)arg1;
- (void)setInlineLmeItems:(id)arg1;
- (void)setInputOrigin:(int)arg1;
- (void)setIsAutoPunctuationEnabled:(bool)arg1;
- (void)setIsPromptedConfirmation:(bool)arg1;
- (void)setIsPromptedDictation:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end

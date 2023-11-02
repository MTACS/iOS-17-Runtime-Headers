
@interface BMSiriPostSiriEngagementFeatures : BMEventBase <BMStoreData> {
    bool  _hasIsConfirmInteraction;
    bool  _hasIsDisambiguateInteraction;
    bool  _hasIsPromptInteraction;
    bool  _hasIsSiriCompleted;
    bool  _hasIsUnsupportedPromptInteraction;
    bool  _hasIsUserAbandoned;
    bool  _hasIsUserCancelled;
    bool  _isConfirmInteraction;
    bool  _isDisambiguateInteraction;
    bool  _isPromptInteraction;
    bool  _isSiriCompleted;
    bool  _isUnsupportedPromptInteraction;
    bool  _isUserAbandoned;
    bool  _isUserCancelled;
    int  _taskSuccess;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsConfirmInteraction;
@property (nonatomic) bool hasIsDisambiguateInteraction;
@property (nonatomic) bool hasIsPromptInteraction;
@property (nonatomic) bool hasIsSiriCompleted;
@property (nonatomic) bool hasIsUnsupportedPromptInteraction;
@property (nonatomic) bool hasIsUserAbandoned;
@property (nonatomic) bool hasIsUserCancelled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConfirmInteraction;
@property (nonatomic, readonly) bool isDisambiguateInteraction;
@property (nonatomic, readonly) bool isPromptInteraction;
@property (nonatomic, readonly) bool isSiriCompleted;
@property (nonatomic, readonly) bool isUnsupportedPromptInteraction;
@property (nonatomic, readonly) bool isUserAbandoned;
@property (nonatomic, readonly) bool isUserCancelled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int taskSuccess;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIsConfirmInteraction;
- (bool)hasIsDisambiguateInteraction;
- (bool)hasIsPromptInteraction;
- (bool)hasIsSiriCompleted;
- (bool)hasIsUnsupportedPromptInteraction;
- (bool)hasIsUserAbandoned;
- (bool)hasIsUserCancelled;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTaskSuccess:(int)arg1 isUserAbandoned:(id)arg2 isUserCancelled:(id)arg3 isSiriCompleted:(id)arg4 isPromptInteraction:(id)arg5 isConfirmInteraction:(id)arg6 isDisambiguateInteraction:(id)arg7 isUnsupportedPromptInteraction:(id)arg8;
- (bool)isConfirmInteraction;
- (bool)isDisambiguateInteraction;
- (bool)isEqual:(id)arg1;
- (bool)isPromptInteraction;
- (bool)isSiriCompleted;
- (bool)isUnsupportedPromptInteraction;
- (bool)isUserAbandoned;
- (bool)isUserCancelled;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasIsConfirmInteraction:(bool)arg1;
- (void)setHasIsDisambiguateInteraction:(bool)arg1;
- (void)setHasIsPromptInteraction:(bool)arg1;
- (void)setHasIsSiriCompleted:(bool)arg1;
- (void)setHasIsUnsupportedPromptInteraction:(bool)arg1;
- (void)setHasIsUserAbandoned:(bool)arg1;
- (void)setHasIsUserCancelled:(bool)arg1;
- (int)taskSuccess;
- (void)writeTo:(id)arg1;

@end

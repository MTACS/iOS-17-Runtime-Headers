
@interface RTTConversation : NSObject <NSSecureCoding> {
    TUCall * _call;
    NSString * _callIdentifier;
    NSMutableArray * _utterances;
}

@property (nonatomic, retain) TUCall *call;
@property (nonatomic, retain) NSString *callIdentifier;
@property (nonatomic, retain) NSMutableArray *utterances;

+ (id)conversationWithCall:(id)arg1;
+ (void)conversationWithCall:(id)arg1 withCallback:(id /* block */)arg2;
+ (void)conversationWithCallUID:(id)arg1 withCallback:(id /* block */)arg2;
+ (id)conversationWithID:(id)arg1 andUtterances:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addTranscriptionFromOtherContactPath:(id)arg1;
- (void)addUtterance:(id)arg1;
- (id)appendCharacter:(unsigned short)arg1;
- (id)appendStringFromOtherContactPath:(id)arg1;
- (id)call;
- (id)callIdentifier;
- (void)cleanup;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversation:(id)arg1;
- (id)lastUtteranceForMe:(bool)arg1;
- (id)lastUtteranceForMe:(bool)arg1 isTranscription:(bool)arg2;
- (unsigned long long)lastUtteranceIndexForMe:(bool)arg1 isTranscription:(bool)arg2;
- (id)mergeUtterancesIfPossible;
- (id)otherContactPath;
- (id)processBackspaceForMe:(bool)arg1;
- (void)setCall:(id)arg1;
- (void)setCallIdentifier:(id)arg1;
- (void)setUtterances:(id)arg1;
- (id)updateTranscriptionFromOtherContactPath:(id)arg1;
- (unsigned long long)utteranceCountForMe:(bool)arg1;
- (id)utterances;

@end

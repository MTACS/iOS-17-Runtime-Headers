
@interface AFVoiceCommandGrammarParseCandidate : NSObject <NSCopying, NSSecureCoding> {
    NSString * _commandId;
    bool  _isComplete;
    NSDictionary * _paramMatches;
    NSUUID * _voiceCommandUUID;
}

@property (nonatomic, readonly, copy) NSString *commandId;
@property (nonatomic, readonly) bool isComplete;
@property (nonatomic, readonly, copy) NSDictionary *paramMatches;
@property (nonatomic, readonly, copy) NSUUID *voiceCommandUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commandId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandId:(id)arg1 isComplete:(bool)arg2 paramMatches:(id)arg3;
- (id)initWithVoiceCommandUUID:(id)arg1 commandId:(id)arg2 isComplete:(bool)arg3 paramMatches:(id)arg4;
- (bool)isComplete;
- (bool)isEqual:(id)arg1;
- (id)paramMatches;
- (id)voiceCommandUUID;

@end

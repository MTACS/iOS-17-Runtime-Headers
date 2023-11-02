
@interface SGMailIntelligenceMissingRecipientWarning : SGMailIntelligenceComposeWarning {
    NSString * _handle;
    NSString * _matchFoundInBCC;
}

@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSString *matchFoundInBCC;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnippet:(id)arg1 core:(id)arg2 handle:(id)arg3 signature:(id)arg4 detectedLanguage:(id)arg5 isIncomingMessage:(bool)arg6 score:(id)arg7 matchFoundInBCC:(id)arg8;
- (id)initWithSnippet:(id)arg1 core:(id)arg2 signature:(id)arg3 detectedLanguage:(id)arg4 isIncomingMessage:(bool)arg5 score:(id)arg6 matchFoundInBCC:(id)arg7;
- (id)matchFoundInBCC;

@end

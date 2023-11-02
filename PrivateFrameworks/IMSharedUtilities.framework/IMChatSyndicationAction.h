
@interface IMChatSyndicationAction : IMSyndicationAction {
    bool  _autoDonateMessages;
}

@property (getter=isAutoDonatingMessages, nonatomic, readonly) bool autoDonateMessages;

+ (bool)supportsSecureCoding;

- (bool)autoSyndicateMessages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithChatGUID:(id)arg1 syndicationStartDate:(id)arg2 autoDonateMessages:(bool)arg3;
- (id)initWithChatGUID:(id)arg1 syndicationStartDate:(id)arg2 autoDonateMessages:(bool)arg3 version:(unsigned char)arg4;
- (id)initWithChatGUID:(id)arg1 syndicationStartDate:(id)arg2 deserializedSyndicationActionType:(unsigned char)arg3 version:(unsigned char)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isAutoDonatingMessages;
- (unsigned char)syndicatedItemType;

@end

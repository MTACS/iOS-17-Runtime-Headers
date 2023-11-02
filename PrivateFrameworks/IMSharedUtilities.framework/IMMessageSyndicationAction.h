
@interface IMMessageSyndicationAction : IMSyndicationAction {
    IMMessagePartGUID * _messagePartGUID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _messagePartRange;
}

@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic, readonly, copy) IMMessagePartGUID *messagePartGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } messagePartRange;
@property (nonatomic, readonly) long long messagePartSyndicationStatus;
@property (nonatomic, readonly) long long messagePartSyndicationType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChatGUID:(id)arg1 syndicationStartDate:(id)arg2 syndicationActionType:(unsigned char)arg3 encodedMessagePartGUID:(id)arg4 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (id)initWithChatGUID:(id)arg1 syndicationStartDate:(id)arg2 syndicationActionType:(unsigned char)arg3 encodedMessagePartGUID:(id)arg4 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 version:(unsigned char)arg6;
- (id)initWithChatGUID:(id)arg1 syndicationStartDate:(id)arg2 syndicationActionType:(unsigned char)arg3 messagePartGUID:(id)arg4 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (id)initWithChatGUID:(id)arg1 syndicationStartDate:(id)arg2 syndicationActionType:(unsigned char)arg3 messagePartGUID:(id)arg4 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 version:(unsigned char)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHighlighted;
- (id)messagePartGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })messagePartRange;
- (long long)messagePartSyndicationStatus;
- (long long)messagePartSyndicationType;
- (unsigned char)syndicatedItemType;

@end

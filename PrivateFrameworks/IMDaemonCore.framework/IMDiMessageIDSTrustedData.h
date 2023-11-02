
@interface IMDiMessageIDSTrustedData : NSObject <NSCopying> {
    long long  _command;
    NSString * _fromIdentifier;
    NSString * _fromPushID;
    NSData * _fromToken;
    bool  _fromTrustedSender;
    NSString * _toIdentifier;
}

@property (nonatomic, readonly) long long command;
@property (nonatomic, readonly) NSString *fromIdentifier;
@property (nonatomic, readonly) NSString *fromPushID;
@property (nonatomic, readonly) NSData *fromToken;
@property (getter=isFromTrustedSender, nonatomic, readonly) bool fromTrustedSender;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) NSString *toIdentifier;

- (void).cxx_destruct;
- (long long)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fromIdentifier;
- (id)fromPushID;
- (id)fromToken;
- (id)initWithTopLevelMessage:(id)arg1 fromPushID:(id)arg2 messageContext:(id)arg3;
- (bool)isFromMe;
- (bool)isFromTrustedSender;
- (id)toIdentifier;

@end

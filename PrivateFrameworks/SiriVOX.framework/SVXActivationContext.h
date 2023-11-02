
@interface SVXActivationContext : NSObject <NSCopying, NSSecureCoding> {
    SVXButtonEvent * _buttonEvent;
    SVXClientInfo * _clientInfo;
    AFRequestInfo * _requestInfo;
    long long  _source;
    SVXSystemEvent * _systemEvent;
    unsigned long long  _timestamp;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) SVXButtonEvent *buttonEvent;
@property (nonatomic, readonly, copy) SVXClientInfo *clientInfo;
@property (nonatomic, readonly, copy) AFRequestInfo *requestInfo;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly, copy) SVXSystemEvent *systemEvent;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buttonEvent;
- (id)clientInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(long long)arg1 timestamp:(unsigned long long)arg2 buttonEvent:(id)arg3 systemEvent:(id)arg4 clientInfo:(id)arg5 requestInfo:(id)arg6 userInfo:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)requestInfo;
- (long long)source;
- (id)systemEvent;
- (unsigned long long)timestamp;
- (id)userInfo;

@end

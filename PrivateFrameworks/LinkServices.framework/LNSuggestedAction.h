
@interface LNSuggestedAction : NSObject <NSCopying, NSSecureCoding> {
    LNAction * _action;
    NSDictionary * _dialogParameters;
    LNSystemProtocol * _systemProtocol;
}

@property (nonatomic, readonly) LNAction *action;
@property (nonatomic, readonly, copy) NSDictionary *dialogParameters;
@property (nonatomic, readonly) LNSystemProtocol *systemProtocol;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialogParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAction:(id)arg1 systemProtocol:(id)arg2 dialogParameters:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)systemProtocol;

@end

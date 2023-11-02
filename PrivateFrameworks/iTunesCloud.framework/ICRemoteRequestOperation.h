
@interface ICRemoteRequestOperation : ICRequestOperation <NSSecureCoding> {
    bool  __shadowOperationForRemoteExecution;
    <NSSecureCoding> * _response;
}

@property (getter=_isShadowOperationForRemoteExecution, setter=_setShadowOperationForRemoteExecution:, nonatomic) bool _shadowOperationForRemoteExecution;
@property (nonatomic, retain) <NSSecureCoding> *response;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_execute;
- (bool)_isShadowOperationForRemoteExecution;
- (void)_setShadowOperationForRemoteExecution:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;

@end

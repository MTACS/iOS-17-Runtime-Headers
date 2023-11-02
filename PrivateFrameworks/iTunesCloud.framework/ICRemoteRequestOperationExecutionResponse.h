
@interface ICRemoteRequestOperationExecutionResponse : NSObject <NSSecureCoding> {
    NSError * _remoteRequestOperationError;
    <NSSecureCoding> * _remoteRequestOperationResponse;
}

@property (nonatomic, retain) NSError *remoteRequestOperationError;
@property (nonatomic, retain) <NSSecureCoding> *remoteRequestOperationResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteRequestOperationResponse:(id)arg1 remoteRequestOperationError:(id)arg2;
- (id)remoteRequestOperationError;
- (id)remoteRequestOperationResponse;
- (void)setRemoteRequestOperationError:(id)arg1;
- (void)setRemoteRequestOperationResponse:(id)arg1;

@end

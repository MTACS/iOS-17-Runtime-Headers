
@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding> {
    NSError * _error;
    NSString * _sessionID;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSString *sessionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initNewMessage;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1;
- (id)sessionID;
- (void)setError:(id)arg1;

@end

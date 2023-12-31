
@interface DADraftMessageRequest : DAMailboxRequest {
    DAMailMessage * _message;
    bool  _send;
}

@property (nonatomic, retain) DAMailMessage *message;
@property (nonatomic) bool send;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestType:(int)arg1 message:(id)arg2 send:(bool)arg3;
- (id)message;
- (bool)send;
- (void)setMessage:(id)arg1;
- (void)setSend:(bool)arg1;

@end

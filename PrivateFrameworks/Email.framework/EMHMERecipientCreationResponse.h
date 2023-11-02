
@interface EMHMERecipientCreationResponse : AAResponse {
    NSString * _replyToAddress;
}

@property (nonatomic, copy) NSString *replyToAddress;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)replyToAddress;
- (void)setReplyToAddress:(id)arg1;

@end

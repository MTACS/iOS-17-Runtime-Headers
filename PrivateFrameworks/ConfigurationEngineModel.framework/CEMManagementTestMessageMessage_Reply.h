
@interface CEMManagementTestMessageMessage_Reply : CEMPayloadBase {
    NSString * _replyEcho;
}

@property (nonatomic, copy) NSString *replyEcho;

+ (id)allowedReasons;
+ (id)allowedReplyKeys;
+ (id)buildRequiredOnlyWithEcho:(id)arg1;
+ (id)buildWithEcho:(id)arg1;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)replyEcho;
- (id)serializePayload;
- (void)setReplyEcho:(id)arg1;

@end

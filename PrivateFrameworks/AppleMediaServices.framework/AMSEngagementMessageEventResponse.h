
@interface AMSEngagementMessageEventResponse : AMSEngagementEnqueueResult {
    NSArray * _messageActions;
}

@property (nonatomic, readonly) NSArray *messageActions;

- (void).cxx_destruct;
- (void)_processActions:(id)arg1;
- (id)initWithEnqueueResult:(id)arg1;
- (id)messageActions;

@end

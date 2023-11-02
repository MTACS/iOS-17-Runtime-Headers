
@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer> {
    MFConditionLock * _conditionLock;
    NSError * _error;
    NSDictionary * _resolvedRecipientsByEmailAddress;
}

@property (readonly) NSError *error;

- (void).cxx_destruct;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (id)error;
- (id)init;
- (void)resolvedRecipientsByEmailAddress:(id)arg1;
- (id)waitForResolvedRecipients;

@end

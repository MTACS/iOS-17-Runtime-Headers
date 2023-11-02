
@interface ATXNotificationDigestFeedbackLogger : NSObject {
    <ATXNotificationDigestFeedbackProtocol> * _digestFeedback;
}

- (void).cxx_destruct;
- (id)_getBundleIdAndEngagementsForDigestGroup:(id)arg1 onDigest:(id)arg2;
- (id)init;
- (id)initWithDigestFeedback:(id)arg1;
- (void)logFeedbackForAnnotatedDigest:(id)arg1;

@end

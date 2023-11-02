
@interface SiriMailInternal.SendMailPlan : SiriMailInternal.MailSendingPlan {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sendMessageTask;
    void confirmIntentOptions;
}

@end

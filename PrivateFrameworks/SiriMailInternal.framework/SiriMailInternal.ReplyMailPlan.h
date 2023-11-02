
@interface SiriMailInternal.ReplyMailPlan : SiriMailInternal.MailSendingPlan {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _replyMessageTask;
    void confirmIntentOptions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  inReplyTo;
}

@end

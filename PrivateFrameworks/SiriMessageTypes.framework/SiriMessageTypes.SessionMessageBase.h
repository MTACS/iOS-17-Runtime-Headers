
@interface SiriMessageTypes.SessionMessageBase : SiriMessageTypes.MessageBase {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionId;
}

- (void).cxx_destruct;

@end

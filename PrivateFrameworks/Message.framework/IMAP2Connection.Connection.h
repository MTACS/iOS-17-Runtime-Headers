
@interface IMAP2Connection.Connection : _TtCs12_SwiftObject {
    void connection;
    void createdAt;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void pendingHandshakeReplyCount;
    void queue;
    void receiveTranscoder;
    void tlsOptions;
    void underlyingID;
}

@end

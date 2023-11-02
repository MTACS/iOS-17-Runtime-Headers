
@interface NWStreamPair : __CFNCoreLoggable {
    unsigned char  _atEOF;
    struct __CFArray { } * _cachedPeerCerts;
    struct __CFData { } * _cachedPeerName;
    struct __SecTrust { } * _cachedTrust;
    NSObject<OS_nw_connection> * _connection;
    unsigned char  _doneInitialRead;
    long long  _outstandingWrites;
    NSObject<OS_dispatch_queue> * _queue;
    struct ReadBuffer { int (**x1)(); long long x2; id x3; long long x4; unsigned char x5; } * _readData;
    struct __CFError { } * _readError;
    void * _rs;
    unsigned char  _rsClosing;
    struct __CFError { } * _writeError;
    void * _ws;
    unsigned char  _wsClosing;
}

- (void)dealloc;

@end

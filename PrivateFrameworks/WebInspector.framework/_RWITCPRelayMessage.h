
@interface _RWITCPRelayMessage : NSObject {
    NSData * _payload;
    bool  _writtenHeader;
    unsigned long long  _writtenPayloadOffset;
}

@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly, copy) NSData *payload;

+ (id)TCPRelayMessageFromDataStream:(id)arg1 error:(id*)arg2;
+ (id)TCPRelayMessageWithPayload:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1;
- (unsigned long long)length;
- (id)payload;
- (long long)write:(int)arg1;
- (long long)writeInternal:(id /* block */)arg1;
- (long long)writeLockdown:(struct _lockdown_connection { }*)arg1;

@end

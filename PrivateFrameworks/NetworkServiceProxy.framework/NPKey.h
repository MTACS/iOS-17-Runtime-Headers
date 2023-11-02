
@interface NPKey : NSObject {
    int  _error;
    unsigned int  _flags;
    NSData * _info;
    unsigned int  _session_counter;
    NSUUID * _uuid;
}

@property (readonly) NSPNetworkAgent *agentForKey;
@property int error;
@property unsigned int flags;
@property (nonatomic, retain) NSData *info;
@property unsigned int session_counter;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (id)agentForKey;
- (id)data;
- (int)error;
- (unsigned int)flags;
- (id)info;
- (id)initWithData:(id)arg1;
- (unsigned int)session_counter;
- (void)setError:(int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInfo:(id)arg1;
- (void)setSession_counter:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end

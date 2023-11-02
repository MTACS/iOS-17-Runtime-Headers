
@interface IDSGroupSessionUnicastParameter : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _connectionIndex;
    long long  _dataMode;
    NSObject<OS_nw_endpoint> * _endpoint;
    NSString * _groupSessionID;
    unsigned long long  _localParticipantID;
    NSObject<OS_nw_parameters> * _parameters;
    unsigned long long  _remoteParticipantID;
    NSData * _salt;
    int  _socket;
}

@property (nonatomic, readonly) unsigned long long connectionIndex;
@property (nonatomic, readonly) long long dataMode;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *endpoint;
@property (nonatomic, readonly) NSString *groupSessionID;
@property (nonatomic, readonly) unsigned long long localParticipantID;
@property (nonatomic, readonly) NSObject<OS_nw_parameters> *parameters;
@property (nonatomic, readonly) unsigned long long remoteParticipantID;
@property (nonatomic, readonly) NSData *salt;
@property int socket;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_requestNWConnectionforIDSGroupSessionUnicastParameter:(id /* block */)arg1;
- (void)_setUpNWConnectionforTesting:(id /* block */)arg1;
- (unsigned long long)connectionIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataMode;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)groupSessionID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConnectedSocket:(int)arg1 dataMode:(long long)arg2 connectionIndex:(unsigned long long)arg3;
- (id)initWithGroupSessionID:(id)arg1 localParticipantID:(unsigned long long)arg2 remoteParticipantID:(unsigned long long)arg3 dataMode:(long long)arg4 connectionIndex:(unsigned long long)arg5;
- (id)initWithGroupSessionID:(id)arg1 localParticipantID:(unsigned long long)arg2 remoteParticipantID:(unsigned long long)arg3 salt:(id)arg4 dataMode:(long long)arg5 connectionIndex:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)localParticipantID;
- (id)parameters;
- (unsigned long long)remoteParticipantID;
- (void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id /* block */)arg1;
- (id)salt;
- (void)setSocket:(int)arg1;
- (int)socket;

@end


@interface IDSGroupSessionUnicastConnector : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_nw_connection> * _cachedConnection;
    id /* block */  _connectionReadyCallback;
    long long  _dataMode;
    NSString * _groupSessionIDAlias;
    unsigned long long  _participantIDAlias;
    NSObject<OS_dispatch_queue> * _queue;
    NSData * _salt;
}

@property (nonatomic, retain) NSObject<OS_nw_connection> *cachedConnection;
@property (nonatomic, copy) id /* block */ connectionReadyCallback;
@property (nonatomic, readonly) long long dataMode;
@property (nonatomic, readonly) NSString *groupSessionIDAlias;
@property (nonatomic, readonly) unsigned long long participantIDAlias;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSData *salt;

+ (id)extractDictionaryFromDataBlobFrom:(id)arg1 error:(id*)arg2;
+ (void)requestNWConnectionToVirtualParticipant:(unsigned long long)arg1 forSession:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)requestNWConnectionWithDataBlob:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedConnection;
- (id /* block */)connectionReadyCallback;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createDataBlobFrom:(id)arg1 port:(unsigned short)arg2;
- (long long)dataMode;
- (void)encodeWithCoder:(id)arg1;
- (id)groupSessionIDAlias;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupSessionID:(id)arg1 participantID:(unsigned long long)arg2 dataMode:(long long)arg3;
- (id)initWithGroupSessionIDAlias:(id)arg1 participantIDAlias:(unsigned long long)arg2 salt:(id)arg3 dataMode:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (void)listenForIncomingConnection:(id /* block */)arg1;
- (unsigned long long)participantIDAlias;
- (id)queue;
- (void)requestDataBlob:(id /* block */)arg1;
- (id)salt;
- (void)setCachedConnection:(id)arg1;
- (void)setConnectionReadyCallback:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setSalt:(id)arg1;

@end

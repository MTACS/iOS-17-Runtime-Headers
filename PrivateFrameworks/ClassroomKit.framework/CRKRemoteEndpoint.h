
@interface CRKRemoteEndpoint : NSObject <NSCopying> {
    NSString * _IPAddress;
    unsigned short  _port;
}

@property (nonatomic, readonly, copy) NSString *IPAddress;
@property (nonatomic, readonly) unsigned short port;
@property (nonatomic, readonly, copy) NSString *stringValue;

- (void).cxx_destruct;
- (id)IPAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteEndpoint:(id)arg1;
- (unsigned short)port;
- (id)stringValue;

@end

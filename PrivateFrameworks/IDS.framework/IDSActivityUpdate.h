
@interface IDSActivityUpdate : NSObject <NSSecureCoding> {
    NSArray * _URIs;
    NSData * _clientContext;
    bool  _isDeviceOnline;
    IDSDevice * _matchingDevice;
    NSData * _pushToken;
    unsigned long long  _serverTimestamp;
    NSString * _subActivity;
}

@property (nonatomic, retain) NSArray *URIs;
@property (nonatomic, readonly) NSData *clientContext;
@property (nonatomic) bool isDeviceOnline;
@property (nonatomic, retain) IDSDevice *matchingDevice;
@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic, readonly) unsigned long long serverTimestamp;
@property (nonatomic, readonly) NSString *subActivity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URIs;
- (id)clientContext;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubActivity:(id)arg1 pushToken:(id)arg2 serverTimestamp:(unsigned long long)arg3 clientContext:(id)arg4 isDeviceOnline:(bool)arg5;
- (bool)isDeviceOnline;
- (id)matchingDevice;
- (id)pushToken;
- (unsigned long long)serverTimestamp;
- (void)setIsDeviceOnline:(bool)arg1;
- (void)setMatchingDevice:(id)arg1;
- (void)setURIs:(id)arg1;
- (id)subActivity;

@end

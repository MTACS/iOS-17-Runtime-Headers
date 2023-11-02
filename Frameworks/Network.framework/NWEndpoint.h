
@interface NWEndpoint : NSObject <NSCopying, NSSecureCoding, NWPrettyDescription> {
    NSObject<OS_nw_endpoint> * _internalEndpoint;
}

@property (nonatomic) unsigned short alternatePort;
@property (nonatomic, retain) NWInterface *interface;
@property (nonatomic, retain) NSObject<OS_nw_endpoint> *internalEndpoint;
@property (nonatomic, readonly) NSString *parentEndpointDomain;
@property (nonatomic, readonly, copy) NSString *privateDescription;
@property (nonatomic) long long remoteInterfaceType;
@property (nonatomic, retain) NSData *txtRecord;

+ (Class)copyClassForEndpointType:(int)arg1;
+ (unsigned int)endpointType;
+ (id)endpointWithCEndpoint:(id)arg1;
+ (id)endpointWithInternalEndpoint:(id)arg1;
+ (id)endpointWithProtocolBufferData:(id)arg1;
+ (bool)supportsResolverCallback;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned short)alternatePort;
- (id)copyCEndpoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createProtocolBufferObject;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedData:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)interface;
- (id)internalEndpoint;
- (bool)isEqual:(id)arg1;
- (id)parentEndpointDomain;
- (id)privateDescription;
- (long long)remoteInterfaceType;
- (void)resolveEndpointWithCompletionHandler:(id /* block */)arg1;
- (void)setAlternatePort:(unsigned short)arg1;
- (void)setInterface:(id)arg1;
- (void)setInternalEndpoint:(id)arg1;
- (void)setRemoteInterfaceType:(long long)arg1;
- (void)setTxtRecord:(id)arg1;
- (id)txtRecord;

@end

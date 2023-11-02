
@interface _MRUpdateOutputDevicesMessageProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _clusterAwareOutputDevices;
    NSString * _endpointUID;
    NSMutableArray * _outputDevices;
}

@property (nonatomic, retain) NSMutableArray *clusterAwareOutputDevices;
@property (nonatomic, retain) NSString *endpointUID;
@property (nonatomic, readonly) bool hasEndpointUID;
@property (nonatomic, retain) NSMutableArray *outputDevices;

+ (Class)clusterAwareOutputDevicesType;
+ (Class)outputDevicesType;

- (void).cxx_destruct;
- (void)addClusterAwareOutputDevices:(id)arg1;
- (void)addOutputDevices:(id)arg1;
- (void)clearClusterAwareOutputDevices;
- (void)clearOutputDevices;
- (id)clusterAwareOutputDevices;
- (id)clusterAwareOutputDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)clusterAwareOutputDevicesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endpointUID;
- (bool)hasEndpointUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDevicesCount;
- (bool)readFrom:(id)arg1;
- (void)setClusterAwareOutputDevices:(id)arg1;
- (void)setEndpointUID:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)writeTo:(id)arg1;

@end

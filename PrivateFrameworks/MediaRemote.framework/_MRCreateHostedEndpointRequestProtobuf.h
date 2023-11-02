
@interface _MRCreateHostedEndpointRequestProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _outputDeviceUIDs;
}

@property (nonatomic, retain) NSMutableArray *outputDeviceUIDs;

+ (Class)outputDeviceUIDsType;

- (void).cxx_destruct;
- (void)addOutputDeviceUIDs:(id)arg1;
- (void)clearOutputDeviceUIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceUIDs;
- (id)outputDeviceUIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDeviceUIDsCount;
- (bool)readFrom:(id)arg1;
- (void)setOutputDeviceUIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end

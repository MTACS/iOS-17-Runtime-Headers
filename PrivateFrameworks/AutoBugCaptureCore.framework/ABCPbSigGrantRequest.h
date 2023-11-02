
@interface ABCPbSigGrantRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying> {
    NSString * _buildPlatform;
    NSString * _deviceModel;
    struct { 
        unsigned int ver : 1; 
    }  _has;
    NSMutableArray * _sigRequests;
    unsigned int  _ver;
}

@property (nonatomic, retain) NSString *buildPlatform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, readonly) bool hasBuildPlatform;
@property (nonatomic, readonly) bool hasDeviceModel;
@property (nonatomic) bool hasVer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *sigRequests;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int ver;

+ (Class)sigRequestType;

- (void).cxx_destruct;
- (void)addSigRequest:(id)arg1;
- (id)buildPlatform;
- (void)clearSigRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceModel;
- (id)dictionaryRepresentation;
- (bool)hasBuildPlatform;
- (bool)hasDeviceModel;
- (bool)hasVer;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuildPlatform:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setHasVer:(bool)arg1;
- (void)setSigRequests:(id)arg1;
- (void)setVer:(unsigned int)arg1;
- (id)sigRequestAtIndex:(unsigned long long)arg1;
- (id)sigRequests;
- (unsigned long long)sigRequestsCount;
- (unsigned int)ver;
- (void)writeTo:(id)arg1;

@end

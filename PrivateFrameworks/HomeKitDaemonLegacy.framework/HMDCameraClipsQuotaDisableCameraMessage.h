
@interface HMDCameraClipsQuotaDisableCameraMessage : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    NSString * _zoneName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasZoneName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *zoneName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasZoneName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setZoneName:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneName;

@end

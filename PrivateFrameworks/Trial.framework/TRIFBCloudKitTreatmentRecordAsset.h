
@interface TRIFBCloudKitTreatmentRecordAsset : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef * _br;
    const struct CloudKitTreatmentRecordAsset { unsigned char x1[1]; } * _ptr;
}

@property (nonatomic, readonly) unsigned int assetIndex;
@property (nonatomic, readonly) unsigned char container;
@property (nonatomic, readonly) bool hasAssetIndex;
@property (nonatomic, readonly) bool hasCkIndex;
@property (nonatomic, readonly) bool hasContainer;
@property (nonatomic, readonly) bool hasHasCkIndex;
@property (nonatomic, readonly) NSString *treatmentId;
@property (nonatomic, readonly) const char *treatmentIdAsCString;
@property (nonatomic, readonly) NSData *treatmentIdAsData;

- (void).cxx_destruct;
- (unsigned int)assetIndex;
- (unsigned char)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1 changes:(id)arg2;
- (bool)hasAssetIndex;
- (bool)hasCkIndex;
- (bool)hasContainer;
- (bool)hasHasCkIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initVerifiedRootObjectFromData:(id)arg1;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2 maxDepth:(unsigned int)arg3 maxTables:(unsigned int)arg4;
- (id)initWithBufRef:(id)arg1 cppPointer:(const struct CloudKitTreatmentRecordAsset { unsigned char x1[1]; }*)arg2;
- (id)initWithBufRef:(id)arg1 rawPointer:(const void*)arg2;
- (bool)isEqual:(id)arg1;
- (id)treatmentId;
- (const char *)treatmentIdAsCString;
- (id)treatmentIdAsData;
- (bool)verifyUTF8Fields;

@end

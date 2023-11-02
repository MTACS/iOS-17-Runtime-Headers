
@interface CKDPStreamingAssetSaveAssetRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int requestedSize : 1; 
        unsigned int uploadedSize : 1; 
    }  _has;
    long long  _requestedSize;
    NSString * _uploadReceipt;
    long long  _uploadedSize;
}

@property (nonatomic) bool hasRequestedSize;
@property (nonatomic, readonly) bool hasUploadReceipt;
@property (nonatomic) bool hasUploadedSize;
@property (nonatomic) long long requestedSize;
@property (nonatomic, retain) NSString *uploadReceipt;
@property (nonatomic) long long uploadedSize;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestedSize;
- (bool)hasUploadReceipt;
- (bool)hasUploadedSize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)requestedSize;
- (void)setHasRequestedSize:(bool)arg1;
- (void)setHasUploadedSize:(bool)arg1;
- (void)setRequestedSize:(long long)arg1;
- (void)setUploadReceipt:(id)arg1;
- (void)setUploadedSize:(long long)arg1;
- (id)uploadReceipt;
- (long long)uploadedSize;
- (void)writeTo:(id)arg1;

@end

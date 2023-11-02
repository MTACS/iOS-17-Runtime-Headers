
@interface ABCPbSummaryAttachmentRequest : PBRequest <NSCopying> {
    NSString * _fileName;
    unsigned int  _fileSize;
    struct { 
        unsigned int fileSize : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic, readonly) bool hasFileName;
@property (nonatomic) bool hasFileSize;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fileName;
- (unsigned int)fileSize;
- (bool)hasFileName;
- (bool)hasFileSize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(unsigned int)arg1;
- (void)setHasFileSize:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

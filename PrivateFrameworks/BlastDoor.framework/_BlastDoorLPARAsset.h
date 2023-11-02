
@interface _BlastDoorLPARAsset : NSObject <NSSecureCoding> {
    NSString * _MIMEType;
    NSData * _data;
    NSURL * _fileURL;
    _BlastDoorLPARAssetProperties * _properties;
    NSURL * _temporaryFileURL;
}

@property (nonatomic, copy) NSString *MIMEType;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, copy) _BlastDoorLPARAssetProperties *properties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (unsigned long long)_encodedSize;
- (id)_initWithARAsset:(id)arg1;
- (bool)_shouldEncodeData;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (void)setFileURL:(id)arg1;
- (void)setMIMEType:(id)arg1;
- (void)setProperties:(id)arg1;

@end

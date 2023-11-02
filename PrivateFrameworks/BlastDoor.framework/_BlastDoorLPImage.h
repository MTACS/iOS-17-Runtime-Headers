
@interface _BlastDoorLPImage : NSObject <NSSecureCoding> {
    NSString * _MIMEType;
    NSData * _data;
    NSURL * _fileURL;
    _BlastDoorLPImageProperties * _properties;
}

@property (nonatomic, copy) NSString *MIMEType;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, copy) _BlastDoorLPImageProperties *properties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (unsigned long long)_encodedSize;
- (id)_initWithImage:(id)arg1;
- (id)_initWithImage:(id)arg1 properties:(id)arg2;
- (bool)_shouldEncodeData;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (void)setData:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setMIMEType:(id)arg1;
- (void)setProperties:(id)arg1;

@end

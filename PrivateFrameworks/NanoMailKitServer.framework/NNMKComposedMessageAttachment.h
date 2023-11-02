
@interface NNMKComposedMessageAttachment : NSObject <NSSecureCoding> {
    NSData * _data;
    NSString * _fileName;
    unsigned long long  _fileSize;
    NSString * _mimeType;
    NSURL * _url;
    NSString * _utiType;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, retain) NSString *mimeType;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSString *utiType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)initWithCoder:(id)arg1;
- (void)logTransmission;
- (id)mimeType;
- (bool)prepareForArchiving;
- (void)setData:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setMimeType:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUtiType:(id)arg1;
- (id)url;
- (id)utiType;

@end

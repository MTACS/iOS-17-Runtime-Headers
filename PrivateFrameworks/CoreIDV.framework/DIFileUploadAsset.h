
@interface DIFileUploadAsset : DIUploadAsset <NSSecureCoding> {
    NSFileHandle * _fileHandle;
    NSURL * _url;
}

@property (nonatomic, readonly) NSFileHandle *fileHandle;
@property (nonatomic, copy) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileHandle;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 assetType:(long long)arg2;
- (void)setUrl:(id)arg1;
- (id)url;

@end

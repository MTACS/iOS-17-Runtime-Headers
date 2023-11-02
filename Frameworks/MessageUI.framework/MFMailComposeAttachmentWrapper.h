
@interface MFMailComposeAttachmentWrapper : NSObject <NSSecureCoding> {
    NSData * _data;
    NSString * _fileName;
    EFSandboxedURLWrapper * _fileURLWrapper;
    NSString * _identifier;
    NSItemProvider * _itemProvider;
    NSString * _mimeType;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, retain) EFSandboxedURLWrapper *fileURLWrapper;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic, retain) NSString *mimeType;

+ (bool)supportsSecureCoding;
+ (id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
+ (id)wrapperWithFileURL:(id)arg1 mimeType:(id)arg2;
+ (id)wrapperWithItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)fileURL;
- (id)fileURLWrapper;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)initWithFileURL:(id)arg1 mimeType:(id)arg2;
- (id)initWithItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)itemProvider;
- (id)mimeType;
- (void)setData:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileURLWrapper:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setMimeType:(id)arg1;

@end

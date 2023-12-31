
@interface CRKOpenFileRequestItem : NSObject <NSSecureCoding> {
    NSData * _fileData;
    NSString * _fileName;
}

@property (nonatomic, copy) NSData *fileData;
@property (nonatomic, copy) NSString *fileName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileData;
- (id)fileName;
- (id)initWithCoder:(id)arg1;
- (void)setFileData:(id)arg1;
- (void)setFileName:(id)arg1;

@end

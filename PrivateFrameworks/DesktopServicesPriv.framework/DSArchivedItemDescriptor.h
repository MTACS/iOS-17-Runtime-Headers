
@interface DSArchivedItemDescriptor : NSObject <NSSecureCoding> {
    NSString * _filePath;
    NSNumber * _fileSize;
    NSString * _typeIdentifier;
}

@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, copy) NSNumber *fileSize;
@property (nonatomic, copy) NSString *typeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)filePath;
- (id)fileSize;
- (id)initWithCoder:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (id)typeIdentifier;

@end

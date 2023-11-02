
@interface SGMailIntelligenceAttachmentProperties : NSObject <NSSecureCoding> {
    NSArray * _authors;
    NSString * _fileDescription;
    NSString * _fileName;
    NSNumber * _fileSizeInBytes;
    NSArray * _keywords;
}

@property (nonatomic, readonly) NSArray *authors;
@property (nonatomic, readonly) NSString *fileDescription;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSNumber *fileSizeInBytes;
@property (nonatomic, readonly) NSArray *keywords;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileDescription;
- (id)fileName;
- (id)fileSizeInBytes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileName:(id)arg1 fileSizeInBytes:(id)arg2 fileDescription:(id)arg3 keywords:(id)arg4 authors:(id)arg5;
- (id)keywords;

@end

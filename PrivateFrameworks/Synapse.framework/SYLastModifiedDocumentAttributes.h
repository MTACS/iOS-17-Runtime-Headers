
@interface SYLastModifiedDocumentAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _fileURL;
    NSDate * _modifiedDate;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSDate *modifiedDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 modifiedDate:(id)arg2;
- (id)modifiedDate;

@end

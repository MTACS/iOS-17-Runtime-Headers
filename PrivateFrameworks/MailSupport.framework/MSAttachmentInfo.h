
@interface MSAttachmentInfo : NSObject <NSSecureCoding> {
    NSString * _filename;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *filename;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)filename;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filename:(id)arg2;
- (void)setFilename:(id)arg1;
- (id)url;

@end

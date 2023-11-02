
@interface WFContextualActionFile : NSObject <NSSecureCoding> {
    NSURL * _fileURL;
    UTType * _type;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) UTType *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)dispose;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 type:(id)arg2;
- (id)type;

@end

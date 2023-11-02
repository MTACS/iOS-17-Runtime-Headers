
@interface CSFileURLBatchResult : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    NSURL * _url;
}

@property (readonly) NSError *error;
@property (readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 andError:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)url;

@end

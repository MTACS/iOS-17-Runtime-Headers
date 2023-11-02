
@interface WFOnScreenContent : NSObject <NSSecureCoding> {
    NSURL * _URL;
    INFile * _file;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) INFile *file;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 file:(id)arg2;

@end


@interface DESDodMLTaskResultContainer : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _JSONResult;
    NSURL * _binaryResultURL;
    double  _duration;
    NSString * _sandboxExtension;
}

@property (nonatomic, readonly) NSDictionary *JSONResult;
@property (nonatomic, readonly) NSURL *binaryResultURL;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *sandboxExtension;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONResult;
- (id)binaryResultURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONResult:(id)arg1 binaryResultURL:(id)arg2 sandboxExtension:(id)arg3 duration:(double)arg4;
- (id)sandboxExtension;
- (id)taskResultWithError:(id*)arg1;

@end

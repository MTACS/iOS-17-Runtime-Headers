
@interface DKDiagnosticResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary * _data;
    NSArray * _fileSandboxTokens;
    NSArray * _files;
    NSNumber * _statusCode;
    NSArray * _uploadStatus;
}

@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSArray *fileSandboxTokens;
@property (nonatomic, readonly) NSArray *files;
@property (nonatomic, readonly) NSNumber *statusCode;
@property (nonatomic, readonly) NSArray *uploadStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileSandboxTokens;
- (id)files;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMutableResult:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)statusCode;
- (id)uploadStatus;

@end


@interface TLPreviewTimelineError : NSObject <NSCopying, NSSecureCoding> {
    NSString * _errorDescription;
    long long  _errorType;
    NSString * _path;
}

@property (nonatomic, readonly) NSString *errorDescription;
@property (nonatomic, readonly) long long errorType;
@property (nonatomic, readonly) NSString *path;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDescription;
- (long long)errorType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithErrorType:(long long)arg1 errorDescription:(id)arg2;
- (id)initWithErrorType:(long long)arg1 errorDescription:(id)arg2 path:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)path;

@end

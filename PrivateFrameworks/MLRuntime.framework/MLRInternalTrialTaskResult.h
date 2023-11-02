
@interface MLRInternalTrialTaskResult : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _JSONResult;
}

@property (nonatomic, readonly) NSDictionary *JSONResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONResult;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONResult:(id)arg1;

@end

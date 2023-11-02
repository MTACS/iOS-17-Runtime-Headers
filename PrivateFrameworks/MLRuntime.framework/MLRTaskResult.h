
@interface MLRTaskResult : NSObject <NSSecureCoding> {
    NSDictionary * _JSONResult;
    NSData * _vector;
}

@property (nonatomic, readonly) NSDictionary *JSONResult;
@property (nonatomic, readonly) NSData *vector;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONResult;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONResult:(id)arg1 unprivatizedVector:(id)arg2;
- (id)vector;

@end

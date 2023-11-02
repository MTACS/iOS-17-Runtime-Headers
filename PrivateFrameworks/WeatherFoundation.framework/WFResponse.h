
@interface WFResponse : NSObject <NSSecureCoding> {
    NSError * _error;
    double  _executionTime;
    NSUUID * _identifier;
    NSString * _type;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) double executionTime;
@property (readonly) NSUUID *identifier;
@property (readonly) NSString *type;

+ (id)responseWithIdentifier:(id)arg1 error:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (double)executionTime;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 error:(id)arg2;
- (void)setError:(id)arg1;
- (void)setExecutionTime:(double)arg1;
- (id)type;

@end

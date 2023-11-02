
@interface HDHRSExtractionFailureRecord : NSObject <NSSecureCoding> {
    long long  _failureCode;
    NSString * _propertyName;
    NSString * _resourceKeyPath;
}

@property (nonatomic, readonly) long long failureCode;
@property (nonatomic, readonly, copy) NSString *internalDisplaySafeDescription;
@property (nonatomic, readonly, copy) NSString *propertyName;
@property (nonatomic, readonly, copy) NSString *resourceKeyPath;

+ (id)extractionFailureRecordWithCode:(long long)arg1 propertyName:(id)arg2 resourceKeyPath:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)failureCode;
- (id)initWithCoder:(id)arg1;
- (id)internalDisplaySafeDescription;
- (id)propertyName;
- (id)resourceKeyPath;

@end

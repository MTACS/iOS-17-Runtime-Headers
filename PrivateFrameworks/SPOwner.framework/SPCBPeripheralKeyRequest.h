
@interface SPCBPeripheralKeyRequest : NSObject <NSSecureCoding> {
    NSDate * _date;
    NSArray * _requestParameters;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSArray *requestParameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 requestParameters:(id)arg2;
- (id)requestParameters;
- (void)setDate:(id)arg1;
- (void)setRequestParameters:(id)arg1;

@end

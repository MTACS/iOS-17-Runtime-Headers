
@interface GDKTSDataRequest : NSObject <NSSecureCoding> {
    long long  _cadence;
    GDKTSQueryParams * _parameters;
    NSString * _requestID;
}

@property (nonatomic, readonly) long long cadence;
@property (nonatomic, readonly, copy) GDKTSQueryParams *parameters;
@property (nonatomic, readonly, copy) NSString *requestID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cadence;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)initWithParameters:(id)arg1 cadence:(long long)arg2;
- (id)parameters;
- (id)requestID;

@end

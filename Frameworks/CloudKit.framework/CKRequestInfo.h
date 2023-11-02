
@interface CKRequestInfo : NSObject <NSSecureCoding> {
    NSString * _operationClassName;
    NSArray * _requestOperations;
    NSString * _requestUUID;
    NSDictionary * _responseHTTPHeaders;
    NSDictionary * _w3cNavigationTiming;
}

@property (nonatomic, retain) NSString *operationClassName;
@property (nonatomic, retain) NSArray *requestOperations;
@property (nonatomic, readonly, copy) NSString *requestUUID;
@property (nonatomic, readonly, copy) NSDictionary *responseHTTPHeaders;
@property (nonatomic, readonly, copy) NSDictionary *w3cNavigationTiming;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestUUID:(id)arg1 responseHTTPHeaders:(id)arg2 w3cTiming:(id)arg3;
- (id)operationClassName;
- (id)requestOperations;
- (id)requestUUID;
- (id)responseHTTPHeaders;
- (void)setOperationClassName:(id)arg1;
- (void)setRequestOperations:(id)arg1;
- (id)w3cNavigationTiming;

@end

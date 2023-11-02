
@interface WBSHistoryServiceItem : WBSHistoryServiceObject {
    long long  _statusCode;
    NSString * _url;
    long long  _visitCount;
}

@property (nonatomic) long long statusCode;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic) long long visitCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithSQLRow:(id)arg1;
- (void)setStatusCode:(long long)arg1;
- (void)setVisitCount:(long long)arg1;
- (long long)statusCode;
- (id)url;
- (long long)visitCount;

@end

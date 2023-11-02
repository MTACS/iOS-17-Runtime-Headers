
@interface IMMockURLResponse : NSObject <NSSecureCoding> {
    NSData * _data;
    NSString * _mockID;
    NSString * _requestBodyKeyPath;
    NSHTTPURLResponse * _response;
}

@property (retain) NSData *data;
@property (copy) NSString *mockID;
@property (copy) NSString *requestBodyKeyPath;
@property (retain) NSHTTPURLResponse *response;

+ (id)objectFromPlist:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mockID;
- (id)requestBodyKeyPath;
- (id)response;
- (void)setData:(id)arg1;
- (void)setMockID:(id)arg1;
- (void)setRequestBodyKeyPath:(id)arg1;
- (void)setResponse:(id)arg1;

@end

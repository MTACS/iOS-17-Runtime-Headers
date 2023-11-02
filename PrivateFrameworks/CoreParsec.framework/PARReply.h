
@interface PARReply : NSObject <NSSecureCoding> {
    NSData * _data;
    NSURLRequest * _httpRequest;
    NSURLResponse * _httpResponse;
    NSArray * _rawResponse;
    double  _scale;
    PARTask * _task;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSURLRequest *httpRequest;
@property (nonatomic, retain) NSURLResponse *httpResponse;
@property (nonatomic, retain) NSArray *rawResponse;
@property (nonatomic) double scale;
@property (nonatomic) PARTask *task;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)httpRequest;
- (id)httpResponse;
- (id)initWithCoder:(id)arg1;
- (id)rawResponse;
- (double)scale;
- (void)setData:(id)arg1;
- (void)setHttpRequest:(id)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setRawResponse:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end

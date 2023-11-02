
@interface ICURLResponse : NSObject {
    NSData * _bodyData;
    NSURL * _bodyDataURL;
    id  _parsedBodyResponse;
    long long  _parsedBodyResponseType;
    ICURLPerformanceMetrics * _performanceMetrics;
    NSURLRequest * _urlRequest;
    NSURLResponse * _urlResponse;
}

@property (nonatomic, readonly) NSData *bodyData;
@property (nonatomic, readonly) NSURL *bodyDataURL;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, retain) ICURLPerformanceMetrics *performanceMetrics;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSURLRequest *urlRequest;
@property (nonatomic, readonly) NSURLResponse *urlResponse;

- (void).cxx_destruct;
- (void)_prepareParsedBodyResponse;
- (id)bodyData;
- (id)bodyDataURL;
- (id)expirationDate;
- (id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyData:(id)arg3 performanceMetrics:(id)arg4;
- (id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyDataURL:(id)arg3 performanceMetrics:(id)arg4;
- (id)parsedBody;
- (id)parsedBodyArray;
- (id)parsedBodyDictionary;
- (id)parsedBodyText;
- (id)performanceMetrics;
- (void)setPerformanceMetrics:(id)arg1;
- (long long)statusCode;
- (id)urlRequest;
- (id)urlResponse;

@end

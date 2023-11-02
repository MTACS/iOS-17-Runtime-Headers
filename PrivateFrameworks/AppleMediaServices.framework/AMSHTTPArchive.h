
@interface AMSHTTPArchive : NSObject <NSSecureCoding> {
    NSData * _JSONData;
    NSData * _backingJSONData;
    bool  _compressed;
    NSString * _urlString;
}

@property (nonatomic, readonly) NSData *JSONData;
@property (nonatomic, retain) NSData *backingJSONData;
@property (getter=isCompressed, nonatomic) bool compressed;
@property (nonatomic, retain) NSString *urlString;

+ (id)_createJSONObjectForEntries:(id)arg1;
+ (id)_createJSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (double)_timeIntervalFromFilename:(id)arg1;
+ (id)ams_dateFormatterForTimeZone:(id)arg1;
+ (id)ams_generateCommentsStringForMetrics:(id)arg1;
+ (id)ams_generateContentDictionaryForResponse:(id)arg1 responseData:(id)arg2;
+ (id)ams_generateHeadersArrayForHTTPHeaders:(id)arg1;
+ (id)ams_generateRequestDictionaryForMetrics:(id)arg1 requestData:(id)arg2;
+ (id)ams_generateResponseDictionaryForMetrics:(id)arg1 responseData:(id)arg2;
+ (id)directory;
+ (id)merge:(id)arg1;
+ (id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2;
+ (void)removeHTTPArchiveFilesOlderThanDate:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONData;
- (id)backingJSONData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHTTPArchiveTaskInfo:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
- (bool)isCompressed;
- (void)logHARData;
- (void)setBackingJSONData:(id)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setUrlString:(id)arg1;
- (id)urlString;
- (bool)writeToDiskWithError:(id*)arg1 compressed:(bool)arg2;
- (bool)writeToDiskWithError:(id*)arg1 compressed:(bool)arg2 appendCombined:(bool)arg3;

@end

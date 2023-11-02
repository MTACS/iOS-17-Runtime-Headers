
@interface AVAssetCustomURLRequest : NSObject {
    struct __CFDictionary { } * _customURLRequest;
    struct __CFDictionary { } * _customURLResponse;
    NSURLSessionTaskMetrics * _metrics;
    unsigned long long  _requestID;
}

@property (nonatomic, retain) NSURLSessionTaskMetrics *metrics;
@property (nonatomic, readonly) unsigned long long requestID;

+ (id)requestWithRequest:(struct __CFDictionary { }*)arg1 id:(unsigned long long)arg2;

- (struct __CFDictionary { }*)customURLRequest;
- (struct __CFDictionary { }*)customURLResponse;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(struct __CFDictionary { }*)arg1 id:(unsigned long long)arg2;
- (id)metrics;
- (unsigned long long)requestID;
- (void)setCustomURLRequest:(struct __CFDictionary { }*)arg1;
- (void)setCustomURLResponse:(struct __CFDictionary { }*)arg1;
- (void)setMetrics:(id)arg1;

@end

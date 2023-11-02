
@interface SAURLSizerResults : NSObject <NSSecureCoding> {
    long long  _timeNow;
    NSDictionary * _urlInfo;
}

@property long long timeNow;
@property (retain) NSDictionary *urlInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addURL:(id)arg1 withSizeInfo:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setTimeNow:(long long)arg1;
- (void)setUrlInfo:(id)arg1;
- (long long)timeNow;
- (id)urlInfo;

@end

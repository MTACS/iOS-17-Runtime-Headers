
@interface CKDTrafficMetadata : NSObject <NSSecureCoding> {
    void headers;
    void method;
    void parsingStandaloneMessage;
    void requestClassName;
    void status;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timestamp;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSString *method;
@property (nonatomic) bool parsingStandaloneMessage;
@property (nonatomic, copy) NSString *requestClassName;
@property (nonatomic) long long status;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)headers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)method;
- (bool)parsingStandaloneMessage;
- (id)requestClassName;
- (void)setHeaders:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setParsingStandaloneMessage:(bool)arg1;
- (void)setRequestClassName:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUrl:(id)arg1;
- (long long)status;
- (id)timestamp;
- (id)url;

@end


@interface CTSweetgumUserConsentFlowInfo : NSObject <NSSecureCoding> {
    NSString * _postData;
    NSString * _webURL;
}

@property (nonatomic, retain) NSString *postData;
@property (nonatomic, retain) NSString *webURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)postData;
- (void)setPostData:(id)arg1;
- (void)setWebURL:(id)arg1;
- (id)webURL;

@end

@interface AKServerRequestConfiguration : NSObject <NSSecureCoding> {
    unsigned long long  _presentationType;
    NSURLRequest * _request;
    unsigned long long  _requestType;
    AKAppleIDServerResourceLoadDelegate * _resourceLoadDelegate;
    NSArray * _whitelistedPathURLs;
}

@property (nonatomic) unsigned long long presentationType;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, retain) AKAppleIDServerResourceLoadDelegate *resourceLoadDelegate;
@property (nonatomic, copy) NSArray *whitelistedPathURLs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1 requestType:(unsigned long long)arg2;
- (unsigned long long)presentationType;
- (id)request;
- (unsigned long long)requestType;
- (id)resourceLoadDelegate;
- (void)setPresentationType:(unsigned long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setResourceLoadDelegate:(id)arg1;
- (void)setWhitelistedPathURLs:(id)arg1;
- (id)whitelistedPathURLs;

@end

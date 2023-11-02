
@interface AMSPurchaseResult : NSObject <NSCopying, NSSecureCoding> {
    NSURLResponse * _URLResponse;
    NSString * _correlationID;
    NSError * _error;
    NSDictionary * _loadURLEventDictionary;
    AMSPurchase * _purchase;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, copy) NSURLResponse *URLResponse;
@property (nonatomic, copy) NSString *correlationID;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSDictionary *loadURLEventDictionary;
@property (nonatomic, copy) AMSPurchase *purchase;
@property (nonatomic, copy) NSDictionary *responseDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLResponse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPurchaseResult:(id)arg1;
- (id)loadURLEventDictionary;
- (id)purchase;
- (id)responseDictionary;
- (void)setCorrelationID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLoadURLEventDictionary:(id)arg1;
- (void)setPurchase:(id)arg1;
- (void)setResponseDictionary:(id)arg1;
- (void)setURLResponse:(id)arg1;

@end

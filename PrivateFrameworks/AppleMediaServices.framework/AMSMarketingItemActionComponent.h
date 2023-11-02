
@interface AMSMarketingItemActionComponent : NSObject {
    NSDictionary * _rawValues;
}

@property (nonatomic, readonly) NSURL *artworkURL;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *rawValues;

- (void).cxx_destruct;
- (id)artworkURL;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)rawValues;

@end

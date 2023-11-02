
@interface GEOStorefrontBundleId : NSObject {
    NSDate * _date;
    unsigned long long  _identifier;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long identifier;

- (void).cxx_destruct;
- (id)date;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithBundleId:(id)arg1;

@end

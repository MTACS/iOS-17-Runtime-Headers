
@interface HAPPairSetupSessionServerInfo : NSObject {
    int  _maxTries;
    NSString * _productData;
}

@property (nonatomic) int maxTries;
@property (nonatomic, retain) NSString *productData;

- (void).cxx_destruct;
- (id)initWithProductData:(id)arg1 maxTries:(int)arg2;
- (int)maxTries;
- (id)productData;
- (void)setMaxTries:(int)arg1;
- (void)setProductData:(id)arg1;

@end

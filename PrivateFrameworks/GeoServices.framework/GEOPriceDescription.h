
@interface GEOPriceDescription : NSObject {
    GEOPDPriceDescription * _geoPriceDescription;
}

@property (nonatomic, retain) GEOPDPriceDescription *geoPriceDescription;
@property (nonatomic, readonly) bool hasPriceDescription;
@property (nonatomic, readonly) NSString *priceDescription;

- (void).cxx_destruct;
- (id)geoPriceDescription;
- (bool)hasPriceDescription;
- (id)initWithGEOPDPriceDescription:(id)arg1;
- (id)priceDescription;
- (void)setGeoPriceDescription:(id)arg1;

@end

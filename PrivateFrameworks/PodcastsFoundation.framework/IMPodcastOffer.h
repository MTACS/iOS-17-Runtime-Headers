
@interface IMPodcastOffer : NSObject {
    NSString * _kind;
    NSString * _priceType;
}

@property (nonatomic, retain) NSString *kind;
@property (nonatomic, retain) NSString *priceType;

- (void).cxx_destruct;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (unsigned long long)offerTypeAsFlagBit;
- (id)priceType;
- (void)setKind:(id)arg1;
- (void)setPriceType:(id)arg1;

@end

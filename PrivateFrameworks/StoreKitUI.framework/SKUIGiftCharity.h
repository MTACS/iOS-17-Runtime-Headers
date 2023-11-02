
@interface SKUIGiftCharity : NSObject {
    NSString * _amountDisclaimer;
    NSArray * _amounts;
    NSString * _description;
    NSString * _identifier;
    NSString * _legalText;
    NSString * _legalText2;
    SKUIArtwork * _logoArtwork;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *amountDisclaimer;
@property (nonatomic, readonly) NSString *charityDescription;
@property (nonatomic, readonly) NSArray *donationAmounts;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *legalText;
@property (nonatomic, readonly) NSString *legalText2;
@property (nonatomic, readonly) SKUIArtwork *logoArtwork;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)amountDisclaimer;
- (id)charityDescription;
- (id)donationAmounts;
- (id)identifier;
- (id)initWithCharityDictionary:(id)arg1;
- (id)legalText;
- (id)legalText2;
- (id)logoArtwork;
- (id)name;

@end

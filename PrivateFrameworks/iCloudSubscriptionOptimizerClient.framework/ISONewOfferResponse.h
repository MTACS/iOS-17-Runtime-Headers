
@interface ISONewOfferResponse : NSObject

- (id)error;
- (bool)shouldDisplayOfferNow;
- (id)toContext;

@end

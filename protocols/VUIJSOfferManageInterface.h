
@protocol VUIJSOfferManageInterface <JSExport>

@required

- (void)clearOffers:(JSValue *)arg1;
- (void)fetchOffers:(bool)arg1 :(JSValue *)arg2;
- (void)saveOffer:(NSDictionary *)arg1 :(JSValue *)arg2;

@end

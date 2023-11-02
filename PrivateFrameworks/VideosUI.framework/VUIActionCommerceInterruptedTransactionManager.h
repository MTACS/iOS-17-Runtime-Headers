
@interface VUIActionCommerceInterruptedTransactionManager : NSObject {
    NSDictionary * interruptedOfferDetails;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)getLastInterruptedOfferDetails;
- (void)setLastInterruptedOfferDetails:(id)arg1;

@end

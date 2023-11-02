
@interface DKWalletLocalPaymentCardViewModel : NSObject <DKWalletCardDisplayable> {
    NSString * subtitle;
    NSString * title;
    NSString * uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)uniqueIdentifier;

@end

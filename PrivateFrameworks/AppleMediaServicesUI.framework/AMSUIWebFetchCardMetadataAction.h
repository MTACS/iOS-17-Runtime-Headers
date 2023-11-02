
@interface AMSUIWebFetchCardMetadataAction : AMSUIWebAction {
    NSNumber * _cardArtworkSize;
    NSString * _passTypeIdentifier;
    NSString * _serialNumber;
}

@property (nonatomic, retain) NSNumber *cardArtworkSize;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) NSString *serialNumber;

- (void).cxx_destruct;
- (id)cardArtworkSize;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)passTypeIdentifier;
- (id)runAction;
- (id)serialNumber;
- (void)setCardArtworkSize:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end

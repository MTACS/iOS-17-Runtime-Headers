
@interface SKUICharityTemplateViewElement : SKUIViewElement {
    NSString * _campaignIdentifier;
    NSString * _charityMetadataURLString;
}

@property (nonatomic, readonly) NSString *campaignIdentifier;
@property (nonatomic, readonly) NSString *charityMetadataURLString;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)campaignIdentifier;
- (id)charityMetadataURLString;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

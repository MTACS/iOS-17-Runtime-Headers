
@interface SiriUILegacyCardSection : NSObject <CRCardSection> {
    NSString * _cardSectionIdentifier;
}

@property (nonatomic, readonly) NSArray *actionCommands;
@property (nonatomic, readonly) <SFCardSection> *backingCardSection;
@property (nonatomic, retain) NSString *cardSectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasNextCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardSectionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCardSectionIdentifier:(id)arg1;

@end

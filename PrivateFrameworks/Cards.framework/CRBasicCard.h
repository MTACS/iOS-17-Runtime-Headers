
@interface CRBasicCard : NSObject <CRCard> {
    NSString * _cardIdentifier;
    NSArray * _cardSections;
    NSArray * _dismissalCommands;
    NSSet * _interactions;
    unsigned long long  cardFormat;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly) SFCard *backingCard;
@property (nonatomic, readonly) unsigned long long cardFormat;
@property (nonatomic, readonly, copy) NSString *cardIdentifier;
@property (nonatomic, retain) NSArray *cardSections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *dismissalCommands;
@property (nonatomic, readonly) bool flexibleSectionOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *interactions;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)asynchronous;
- (unsigned long long)cardFormat;
- (id)cardIdentifier;
- (id)cardSections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dismissalCommands;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interactions;
- (void)loadCardWithCompletion:(id /* block */)arg1;
- (void)setCardSections:(id)arg1;
- (void)setDismissalCommands:(id)arg1;
- (void)setInteractions:(id)arg1;

@end

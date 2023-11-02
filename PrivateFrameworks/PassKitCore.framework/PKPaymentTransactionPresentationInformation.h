
@interface PKPaymentTransactionPresentationInformation : NSObject {
    NSString * _badgeString;
    bool  _destructiveSecondaryString;
    NSString * _primaryString;
    NSString * _secondaryBadgeSymbol;
    NSString * _secondaryString;
    bool  _shouldGrayValue;
    bool  _shouldShowDisclosure;
    bool  _shouldStrikeValue;
    NSString * _tertiaryString;
    NSString * _valueString;
}

@property (nonatomic, retain) NSString *badgeString;
@property (nonatomic) bool destructiveSecondaryString;
@property (nonatomic, retain) NSString *primaryString;
@property (nonatomic, retain) NSString *secondaryBadgeSymbol;
@property (nonatomic, retain) NSString *secondaryString;
@property (nonatomic) bool shouldGrayValue;
@property (nonatomic) bool shouldShowDisclosure;
@property (nonatomic) bool shouldStrikeValue;
@property (nonatomic, retain) NSString *tertiaryString;
@property (nonatomic, retain) NSString *valueString;

- (void).cxx_destruct;
- (id)badgeString;
- (bool)destructiveSecondaryString;
- (bool)isEqual:(id)arg1;
- (id)primaryString;
- (id)secondaryBadgeSymbol;
- (id)secondaryString;
- (void)setBadgeString:(id)arg1;
- (void)setDestructiveSecondaryString:(bool)arg1;
- (void)setPrimaryString:(id)arg1;
- (void)setSecondaryBadgeSymbol:(id)arg1;
- (void)setSecondaryString:(id)arg1;
- (void)setShouldGrayValue:(bool)arg1;
- (void)setShouldShowDisclosure:(bool)arg1;
- (void)setShouldStrikeValue:(bool)arg1;
- (void)setTertiaryString:(id)arg1;
- (void)setValueString:(id)arg1;
- (bool)shouldGrayValue;
- (bool)shouldShowDisclosure;
- (bool)shouldStrikeValue;
- (id)tertiaryString;
- (id)valueString;

@end

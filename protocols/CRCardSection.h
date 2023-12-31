
@protocol CRCardSection <NSObject, NSCopying>

@required

- (NSString *)cardSectionIdentifier;

@optional

- (NSArray *)actionCommands;
- (<SFCardSection> *)backingCardSection;
- (bool)hasNextCard;
- (NSSet *)parametersForInteraction:(INInteraction *)arg1;

@end


@interface VCInteractionDonation : NSObject <VCActionDonation> {
    NSString * _identifier;
    INInteraction * _interaction;
    NSString * _sourceAppIdentifier;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *fullDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) INInteraction *interaction;
@property (nonatomic, readonly) INShortcut *shortcut;
@property (nonatomic, readonly, copy) NSString *sourceAppIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceAppIdentifierForDisplay;
@property (nonatomic, readonly, copy) NSString *sourceAppIdentifierForLaunching;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *suggestedPhrase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) id uniqueProperty;

+ (id)timestampDateFormatter;

- (void).cxx_destruct;
- (id)date;
- (id)fullDescription;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithEvent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 interaction:(id)arg3;
- (id)interaction;
- (bool)isEqual:(id)arg1;
- (id)shortcut;
- (id)sourceAppIdentifier;
- (id)sourceAppIdentifierForDisplay;
- (id)sourceAppIdentifierForLaunching;
- (id)subtitle;
- (id)suggestedPhrase;
- (id)title;
- (id)uniqueProperty;

@end

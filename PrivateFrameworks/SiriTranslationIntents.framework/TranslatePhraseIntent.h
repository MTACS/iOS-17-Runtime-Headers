
@interface TranslatePhraseIntent : INIntent

@property (nonatomic, retain) NSNumber *isCancel;
@property (nonatomic, retain) NSNumber *isProfanity;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, copy) NSString *phraseReference;
@property (nonatomic, copy) NSString *sourceLanguage;
@property (nonatomic, copy) NSString *targetLanguage;
@property (nonatomic, retain) NSNumber *translateToSourceLanguage;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (bool)supportsBSXPCSecureCoding;

@end

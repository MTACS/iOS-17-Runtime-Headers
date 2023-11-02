
@interface PXComposeRecipient : NSObject <NSCopying, PXTapToRadar> {
    <PXPersonSuggestion> * _personSuggestion;
    PXRecipient * _recipient;
}

@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) <PXPersonSuggestion> *personSuggestion;
@property (nonatomic, readonly) PXRecipient *recipient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticDictionary;
- (unsigned long long)hash;
- (id)initWithPersonSuggestion:(id)arg1;
- (id)initWithPersonSuggestion:(id)arg1 contact:(id)arg2;
- (id)initWithRecipient:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)personSuggestion;
- (id)recipient;

@end

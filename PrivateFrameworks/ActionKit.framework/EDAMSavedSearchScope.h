
@interface EDAMSavedSearchScope : FATObject {
    NSNumber * _includeAccount;
    NSNumber * _includeBusinessLinkedNotebooks;
    NSNumber * _includePersonalLinkedNotebooks;
}

@property (nonatomic, retain) NSNumber *includeAccount;
@property (nonatomic, retain) NSNumber *includeBusinessLinkedNotebooks;
@property (nonatomic, retain) NSNumber *includePersonalLinkedNotebooks;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)includeAccount;
- (id)includeBusinessLinkedNotebooks;
- (id)includePersonalLinkedNotebooks;
- (void)setIncludeAccount:(id)arg1;
- (void)setIncludeBusinessLinkedNotebooks:(id)arg1;
- (void)setIncludePersonalLinkedNotebooks:(id)arg1;

@end

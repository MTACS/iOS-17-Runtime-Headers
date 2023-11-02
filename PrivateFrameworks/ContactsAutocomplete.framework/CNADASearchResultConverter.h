
@interface CNADASearchResultConverter : NSObject {
    NSString * _displayName;
    CNAutocompleteResultFactory * _factory;
    CNAutocompleteNameComponents * _nameComponents;
    NSMutableArray * _results;
}

@property (copy) NSString *displayName;
@property (copy) CNAutocompleteNameComponents *nameComponents;

+ (id)autocompleteResultsForDASearchResultElement:(id)arg1 request:(id)arg2 factory:(id)arg3;
+ (id)displayNameForElement:(id)arg1;
+ (id)nameComponentsForElement:(id)arg1;
+ (id /* block */)resultTransformForRequest:(id)arg1 factory:(id)arg2;
+ (bool)shouldIncludeEmailAddressesForRequest:(id)arg1;
+ (bool)shouldIncludePhoneNumbersForRequest:(id)arg1;

- (void).cxx_destruct;
- (void)addEmailAddress:(id)arg1;
- (void)addPhoneNumber:(id)arg1;
- (id)build;
- (id)displayName;
- (id)initWithFactory:(id)arg1;
- (id)nameComponents;
- (void)setDisplayName:(id)arg1;
- (void)setNameComponents:(id)arg1;

@end


@interface SAUIDisambiguationItemSelected : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *selectedAceId;

+ (id)disambiguationItemSelected;
+ (id)disambiguationItemSelectedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)selectedAceId;
- (void)setSelectedAceId:(id)arg1;

@end

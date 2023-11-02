
@interface SATTSGetUnspeakableRangeOfText : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSArray *texts;

+ (id)getUnspeakableRangeOfText;
+ (id)getUnspeakableRangeOfTextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locale;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setLocale:(id)arg1;
- (void)setTexts:(id)arg1;
- (id)texts;

@end

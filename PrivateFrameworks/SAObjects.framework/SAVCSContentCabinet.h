
@interface SAVCSContentCabinet : SAUISnippet

@property (nonatomic) bool browseResults;
@property (nonatomic, retain) SAUIConfirmationView *confirmationView;
@property (nonatomic, retain) SAUITemplateButton *foregroundAppButton;
@property (nonatomic, copy) NSNumber *fullScreenEnabled;
@property (nonatomic, copy) NSArray *shelves;

+ (id)contentCabinet;
+ (id)contentCabinetWithDictionary:(id)arg1 context:(id)arg2;

- (bool)browseResults;
- (id)confirmationView;
- (id)encodedClassName;
- (id)foregroundAppButton;
- (id)fullScreenEnabled;
- (id)groupIdentifier;
- (void)setBrowseResults:(bool)arg1;
- (void)setConfirmationView:(id)arg1;
- (void)setForegroundAppButton:(id)arg1;
- (void)setFullScreenEnabled:(id)arg1;
- (void)setShelves:(id)arg1;
- (id)shelves;

@end

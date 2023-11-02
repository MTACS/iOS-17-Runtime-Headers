
@interface SAVCSContentButton : SAUIButton

@property (nonatomic, copy) NSString *canonicalId;
@property (nonatomic, retain) SASTTemplateContentRating *contentRating;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSArray *togglePlayPauseCommands;
@property (nonatomic, copy) NSURL *url;

+ (id)contentButton;
+ (id)contentButtonWithDictionary:(id)arg1 context:(id)arg2;

- (id)canonicalId;
- (id)contentRating;
- (id)contentType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCanonicalId:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setTogglePlayPauseCommands:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)togglePlayPauseCommands;
- (id)url;

@end

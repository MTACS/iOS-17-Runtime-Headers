
@interface EMMessageSnippetHintZoneBuilder : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)authorHintsFromHintsBySnippetZone:(id)arg1;
+ (id)log;
+ (id)snippetHintZoneFromString:(id)arg1;

@end

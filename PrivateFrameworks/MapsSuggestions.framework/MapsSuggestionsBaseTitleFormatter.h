
@interface MapsSuggestionsBaseTitleFormatter : NSObject <MapsSuggestionsTitleFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (bool)resetTitlesForEntry:(id)arg1;
- (id)uniqueName;

@end

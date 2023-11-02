
@protocol CNAutocompleteSourceInclusionPolicy <NSObject>

@required

- (bool)includeCalendarServers;
- (bool)includeContacts;
- (bool)includeDirectoryServers;
- (bool)includeLocalExtensions;
- (bool)includePredictions;
- (bool)includeRecents;
- (bool)includeStewie;
- (bool)includeSuggestions;
- (bool)includeSupplementalResults;

@end

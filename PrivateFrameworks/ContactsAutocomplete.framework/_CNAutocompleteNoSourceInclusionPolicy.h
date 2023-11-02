
@interface _CNAutocompleteNoSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool includeCalendarServers;
@property (readonly) bool includeContacts;
@property (readonly) bool includeDirectoryServers;
@property (readonly) bool includeLocalExtensions;
@property (readonly) bool includePredictions;
@property (readonly) bool includeRecents;
@property (readonly) bool includeStewie;
@property (readonly) bool includeSuggestions;
@property (readonly) bool includeSupplementalResults;
@property (readonly) Class superclass;

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

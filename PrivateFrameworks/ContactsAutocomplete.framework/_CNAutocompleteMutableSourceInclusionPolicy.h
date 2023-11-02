
@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {
    bool  _includeCalendarServers;
    bool  _includeContacts;
    bool  _includeDirectoryServers;
    bool  _includeLocalExtensions;
    bool  _includePredictions;
    bool  _includeRecents;
    bool  _includeStewie;
    bool  _includeSuggestions;
    bool  _includeSupplementalResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool includeCalendarServers;
@property bool includeContacts;
@property bool includeDirectoryServers;
@property bool includeLocalExtensions;
@property bool includePredictions;
@property bool includeRecents;
@property bool includeStewie;
@property bool includeSuggestions;
@property bool includeSupplementalResults;
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
- (void)setIncludeCalendarServers:(bool)arg1;
- (void)setIncludeContacts:(bool)arg1;
- (void)setIncludeDirectoryServers:(bool)arg1;
- (void)setIncludeLocalExtensions:(bool)arg1;
- (void)setIncludePredictions:(bool)arg1;
- (void)setIncludeRecents:(bool)arg1;
- (void)setIncludeStewie:(bool)arg1;
- (void)setIncludeSuggestions:(bool)arg1;
- (void)setIncludeSupplementalResults:(bool)arg1;

@end

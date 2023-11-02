
@interface CNAutocompleteFetchRequest : NSObject <NSCopying, NSSecureCoding> {
    CNAutocompleteFetchContext * _fetchContext;
    bool  _includeCalendarServers;
    bool  _includeContacts;
    bool  _includeDirectoryServers;
    bool  _includeLocalExtensions;
    bool  _includePredictions;
    bool  _includeRecents;
    bool  _includeStewie;
    bool  _includeSuggestions;
    NSString * _priorityDomainForSorting;
    NSString * _searchString;
    unsigned long long  _searchType;
    NSNumber * _shouldIncludeGroupResultsImpl;
    NSString * _triageIdentifier;
}

@property (copy) CNAutocompleteFetchContext *fetchContext;
@property bool includeCalendarServers;
@property bool includeContacts;
@property bool includeDirectoryServers;
@property bool includeLocalExtensions;
@property bool includePredictions;
@property bool includeRecents;
@property bool includeServers;
@property bool includeStewie;
@property bool includeSuggestions;
@property (copy) NSString *priorityDomainForSorting;
@property (copy) NSString *searchString;
@property unsigned long long searchType;
@property (readonly) NSArray *searchableProperties;
@property (copy) NSString *sendingAddress;
@property bool shouldIncludeGroupResults;
@property (readonly) NSString *triageIdentifier;

+ (id)makeTriageIdentifier;
+ (id)request;
+ (id)searchablePropertiesForSearchType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executeWithDelegate:(id)arg1;
- (id)fetchContext;
- (unsigned long long)hash;
- (bool)includeCalendarServers;
- (bool)includeContacts;
- (id)includeDebugString;
- (bool)includeDirectoryServers;
- (bool)includeLocalExtensions;
- (bool)includePredictions;
- (bool)includeRecents;
- (bool)includeServers;
- (bool)includeStewie;
- (bool)includeSuggestions;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)priorityDomainForSorting;
- (id)searchString;
- (unsigned long long)searchType;
- (id)searchTypeDebugString;
- (id)searchableProperties;
- (id)sendingAddress;
- (void)setFetchContext:(id)arg1;
- (void)setIncludeCalendarServers:(bool)arg1;
- (void)setIncludeContacts:(bool)arg1;
- (void)setIncludeDirectoryServers:(bool)arg1;
- (void)setIncludeLocalExtensions:(bool)arg1;
- (void)setIncludePredictions:(bool)arg1;
- (void)setIncludeRecents:(bool)arg1;
- (void)setIncludeServers:(bool)arg1;
- (void)setIncludeStewie:(bool)arg1;
- (void)setIncludeSuggestions:(bool)arg1;
- (void)setPriorityDomainForSorting:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchType:(unsigned long long)arg1;
- (void)setSendingAddress:(id)arg1;
- (void)setShouldIncludeGroupResults:(bool)arg1;
- (bool)shouldIncludeGroupResults;
- (id)shouldIncludeGroupResultsDebugString;
- (id)triageIdentifier;

@end

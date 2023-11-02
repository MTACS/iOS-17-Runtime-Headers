
@interface SMSuggestionEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    bool  _ascending;
    unsigned long long  _batchSize;
    NSDateInterval * _dateInterval;
    unsigned long long  _fetchLimit;
    NSArray * _filteredToSessionTypes;
    NSArray * _filteredToSuggestionSessionTypes;
    NSArray * _filteredToSuggestionTriggers;
    NSArray * _filteredToSuggestionUserTypes;
    bool  _includeSuppressed;
    unsigned long long  _offset;
    bool  _sortByCreationDate;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) unsigned long long fetchLimit;
@property (nonatomic, readonly) NSArray *filteredToSessionTypes;
@property (nonatomic, readonly) NSArray *filteredToSuggestionSessionTypes;
@property (nonatomic, readonly) NSArray *filteredToSuggestionTriggers;
@property (nonatomic, readonly) NSArray *filteredToSuggestionUserTypes;
@property (nonatomic, readonly) bool includeSuppressed;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) bool sortByCreationDate;

+ (id)getEnumerationOptionsForLatestSuggestionSortedByCreationDateIncludeSuppressed:(bool)arg1 filteredToSuggestionTriggers:(id)arg2 filteredToSuggestionUserTypes:(id)arg3 filteredToSessionTypes:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)enumeratedType;
- (unsigned long long)fetchLimit;
- (id)filteredToSessionTypes;
- (id)filteredToSuggestionSessionTypes;
- (id)filteredToSuggestionTriggers;
- (id)filteredToSuggestionUserTypes;
- (bool)includeSuppressed;
- (id)init;
- (id)initWithBatchSize:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 offset:(unsigned long long)arg3 includeSuppressed:(bool)arg4 sortByCreationDate:(bool)arg5 ascending:(bool)arg6 dateInterval:(id)arg7 filteredToSuggestionTriggers:(id)arg8 filteredToSuggestionUserTypes:(id)arg9 filteredToSessionTypes:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncludeSuppressed:(bool)arg1 sortByCreationDate:(bool)arg2 ascending:(bool)arg3 dateInterval:(id)arg4 filteredToSuggestionTriggers:(id)arg5 filteredToSuggestionUserTypes:(id)arg6 filteredToSessionTypes:(id)arg7;
- (unsigned long long)offset;
- (bool)sortByCreationDate;

@end

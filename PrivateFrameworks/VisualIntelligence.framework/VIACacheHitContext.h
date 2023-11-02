
@interface VIACacheHitContext : NSObject <NSCopying> {
    NSString * _applicationIdentifier;
    unsigned long long  _cachedResultQueryID;
    NSString * _engagementSuggestionType;
    unsigned long long  _queryID;
}

@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly) unsigned long long cachedResultQueryID;
@property (nonatomic, readonly) NSString *engagementSuggestionType;
@property (nonatomic, readonly) unsigned long long queryID;

+ (id)contextWithDictionary:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (unsigned long long)cachedResultQueryID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)engagementSuggestionType;
- (id)initWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2 applicationIdentifier:(id)arg3 engagementSuggestionType:(id)arg4;
- (unsigned long long)queryID;

@end

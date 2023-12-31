
@interface STShowMapsSearchResultsRequest : AFSiriRequest {
    NSString * _extSessionGuid;
    NSDate * _extSessionGuidCreatedTimestamp;
    STSiriLocation * _searchResults;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithLocation:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)initWithCoder:(id)arg1;
- (id)searchResults;

@end

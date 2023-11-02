
@interface EMContentRequestOptions : NSObject <EMContentRequestOptionsBuilder, NSCopying, NSSecureCoding> {
    bool  _includeCachedMetadataJSON;
    long long  _includeSuggestionItems;
    long long  _networkUsage;
    bool  _requestAllHeaders;
    NSArray * _requestedHeaderKeys;
    NSString * _requestedRepresentation;
}

@property (nonatomic) bool includeCachedMetadataJSON;
@property (nonatomic) long long includeSuggestionItems;
@property (nonatomic) long long networkUsage;
@property (nonatomic) bool requestAllHeaders;
@property (nonatomic, copy) NSArray *requestedHeaderKeys;
@property (nonatomic, copy) NSString *requestedRepresentation;

+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2;
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(bool)arg3;
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestions:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithBuilder:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeCachedMetadataJSON;
- (long long)includeSuggestionItems;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)networkUsage;
- (bool)requestAllHeaders;
- (id)requestedHeaderKeys;
- (id)requestedRepresentation;
- (void)setIncludeCachedMetadataJSON:(bool)arg1;
- (void)setIncludeSuggestionItems:(long long)arg1;
- (void)setNetworkUsage:(long long)arg1;
- (void)setRequestAllHeaders:(bool)arg1;
- (void)setRequestedHeaderKeys:(id)arg1;
- (void)setRequestedRepresentation:(id)arg1;

@end

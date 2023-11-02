
@interface SHEndpoints : NSObject {
    NSDictionary * _endpoints;
    NSString * _suggestedLanguage;
}

@property (nonatomic, readonly) NSDictionary *endpoints;
@property (nonatomic, readonly, copy) NSString *suggestedLanguage;

- (void).cxx_destruct;
- (id)endpoints;
- (id)initWithConfiguration:(id)arg1 suggestedLanguage:(id)arg2;
- (id)lookupURLPathForClientIdentifier:(id)arg1;
- (id)matchURLPathForClientIdentifier:(id)arg1;
- (id)suggestedLanguage;

@end

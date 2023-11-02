
@interface ENDownloadManagerState : NSObject <NSSecureCoding> {
    NSDictionary * _statesByURL;
}

@property (nonatomic, readonly, copy) NSArray *endpointStates;
@property (nonatomic, readonly, copy) NSArray *endpoints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointStates;
- (id)endpoints;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setEndpoints:(id)arg1;
- (id)stateForServerBaseURL:(id)arg1;

@end


@interface REMStoreSwiftInvocationResult : NSObject <NSSecureCoding> {
    REMFetchResultToken * _latestFetchResultToken;
    NSData * _resultData;
    NSDictionary * _resultStorages;
}

@property (nonatomic, readonly) REMFetchResultToken *latestFetchResultToken;
@property (nonatomic, readonly) NSData *resultData;
@property (nonatomic, readonly) NSDictionary *resultStorages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultData:(id)arg1 storages:(id)arg2 latestFetchResultToken:(id)arg3;
- (id)latestFetchResultToken;
- (id)resultData;
- (id)resultStorages;

@end


@interface TITypingSessionParams : NSObject {
    NSArray * _activeInputModes;
    long long  _assetAvailabilityStatus;
    NSDictionary * _testingParameters;
    NSString * _wordSeparator;
}

@property (nonatomic, readonly) NSArray *activeInputModes;
@property (nonatomic, readonly) long long assetAvailabilityStatus;
@property (nonatomic, readonly) NSDictionary *testingParameters;
@property (nonatomic, readonly) NSString *wordSeparator;

- (void).cxx_destruct;
- (id)activeInputModes;
- (long long)assetAvailabilityStatus;
- (id)initWithActiveInputModes:(id)arg1 wordSeparator:(id)arg2 testingParameters:(id)arg3 assetAvailabilityStatus:(long long)arg4;
- (id)testingParameters;
- (id)wordSeparator;

@end

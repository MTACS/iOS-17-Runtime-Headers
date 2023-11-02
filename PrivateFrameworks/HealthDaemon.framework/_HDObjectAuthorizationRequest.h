
@interface _HDObjectAuthorizationRequest : NSObject {
    NSArray * _authorizationRecords;
    id /* block */  _completion;
    NSUUID * _identifier;
    HKObjectAuthorizationPromptSessionMetadata * _metadata;
    bool  _promptWithAllSamples;
    NSArray * _samples;
    NSUUID * _sessionIdentifier;
}

- (void).cxx_destruct;

@end

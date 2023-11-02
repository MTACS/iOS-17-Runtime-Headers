
@interface _HDObjectAuthorizationPromptSession : NSObject {
    NSString * _bundleIdentifier;
    NSMutableArray * _completions;
    bool  _didStartTransaction;
    HDProfile * _profile;
    NSMutableArray * _requests;
    id /* block */  _sessionCompletion;
    NSUUID * _sessionIdentifier;
}

- (void).cxx_destruct;

@end

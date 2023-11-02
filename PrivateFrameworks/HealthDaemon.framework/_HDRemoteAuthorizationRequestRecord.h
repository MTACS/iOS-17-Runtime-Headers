
@interface _HDRemoteAuthorizationRequestRecord : NSObject {
    NSString * _bundleID;
    bool  _didRecieveShouldPrompt;
    NSString * _hostAppName;
    NSMutableArray * _records;
    bool  _shouldPrompt;
    NSError * _shouldPromptError;
}

- (void).cxx_destruct;

@end

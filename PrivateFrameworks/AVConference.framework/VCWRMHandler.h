
@interface VCWRMHandler : NSObject {
    double  _WRMNotificationRequestTime;
    bool  _isRemoteDuplicating;
    double  _lastConnectionUnstableTime;
    double  _localLinkTypeSuggestionChangeTime;
    int  _localWRMLinkTypeSuggestion;
    int  _remoteWRMLinkTypeSuggestion;
}

@property (readonly) bool isRemoteDuplicating;
@property double localLinkTypeSuggestionChangeTime;
@property (readonly) int localWRMLinkTypeSuggestion;
@property (readonly) int remoteWRMLinkTypeSuggestion;

- (id)init;
- (bool)isRemoteDuplicating;
- (double)localLinkTypeSuggestionChangeTime;
- (int)localWRMLinkTypeSuggestion;
- (unsigned char)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(bool)arg2;
- (int)remoteWRMLinkTypeSuggestion;
- (void)setLocalLinkTypeSuggestionChangeTime:(double)arg1;

@end


@interface IMURLProtocolHandler : AMSURLProtocolHandler {
    bool  _followsRedirects;
}

@property bool followsRedirects;

- (bool)followsRedirects;
- (id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
- (void)setFollowsRedirects:(bool)arg1;

@end

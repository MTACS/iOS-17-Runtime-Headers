
@interface PKSharingAnalyticsReporter : NSObject {
    bool  _isSessionOwned;
    NSString * _subject;
}

@property (nonatomic, readonly) NSData *sessionToken;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithSubject:(id)arg1 sessionToken:(id)arg2 reuseExistingSession:(bool)arg3;
- (void)sendEvent:(id)arg1;
- (id)sessionToken;

@end

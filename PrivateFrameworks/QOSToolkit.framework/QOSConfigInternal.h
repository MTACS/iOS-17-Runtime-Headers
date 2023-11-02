
@interface QOSConfigInternal : NSObject {
    void appTarget;
    void issueRefreshFrequencyInSecs;
    void issuesUrl;
    void locale;
    void locationRefreshFrequencyInSecs;
    void locationUrl;
    void syncStartDelayOffsetInSecs;
}

@property (nonatomic, readonly) long long appTarget;
@property (nonatomic, readonly) NSString *locale;

- (void).cxx_destruct;
- (long long)appTarget;
- (id)init;
- (id)initWithAppTarget:(long long)arg1 locale:(id)arg2;
- (id)locale;

@end

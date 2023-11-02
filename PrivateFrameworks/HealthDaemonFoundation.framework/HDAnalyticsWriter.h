
@interface HDAnalyticsWriter : NSObject {
    NSString * _analyticsDirectory;
    struct __SecCertificate { } * _certificate;
}

// Image: /System/Library/PrivateFrameworks/HealthDaemonFoundation.framework/HealthDaemonFoundation

- (void).cxx_destruct;
- (id)URLForAnalyticsFileWithName:(id)arg1;
- (id)analyticsFilePathsWithError:(id*)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)submitJSONAnalyticsData:(id)arg1 bugType:(id)arg2 error:(id*)arg3;
- (bool)submitJSONAnalyticsData:(id)arg1 toDirectory:(id)arg2 withConfiguration:(id)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)initWithProfile:(id)arg1;

@end

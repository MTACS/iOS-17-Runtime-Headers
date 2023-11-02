
@interface ENExposureDetectionHistoryCheck : NSObject {
    NSArray * _files;
    ENExposureDetectionHistorySession * _session;
}

@property (nonatomic, copy) NSArray *files;
@property (nonatomic, retain) ENExposureDetectionHistorySession *session;

- (void).cxx_destruct;
- (id)files;
- (id)init;
- (id)session;
- (void)setFiles:(id)arg1;
- (void)setSession:(id)arg1;

@end

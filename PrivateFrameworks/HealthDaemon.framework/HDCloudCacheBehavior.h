
@interface HDCloudCacheBehavior : NSObject {
    HDProfile * _profile;
    bool  _shouldFetchSharingRecords;
}

@property (nonatomic, readonly) bool shouldFetchSharingRecords;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1;
- (bool)shouldFetchSharingRecords;
- (void)unitTest_setShouldFetchSharingRecords:(bool)arg1;

@end

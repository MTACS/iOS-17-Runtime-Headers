
@interface BlastDoorTapBack_MessageSummaryInfo : NSObject {
    void tapBack_MessageSummaryInfo;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *pluginBundleID;
@property (nonatomic, readonly) NSString *pluginDisplayName;
@property (nonatomic, readonly) NSString *summary;

- (void).cxx_destruct;
- (long long)contentType;
- (id)description;
- (id)init;
- (id)pluginBundleID;
- (id)pluginDisplayName;
- (id)summary;

@end

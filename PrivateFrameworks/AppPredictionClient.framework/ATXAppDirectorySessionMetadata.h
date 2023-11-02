
@interface ATXAppDirectorySessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol> {
    bool  _didSearchDuringSession;
    NSString * _engagedBundleId;
    NSNumber * _engagedBundleIdInTopAppsVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSearchDuringSession;
@property (nonatomic, retain) NSString *engagedBundleId;
@property (nonatomic, retain) NSNumber *engagedBundleIdInTopAppsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (bool)didSearchDuringSession;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedBundleId;
- (id)engagedBundleIdInTopAppsVisible;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEngagedBundleId:(id)arg1 engagedBundleIdInTopAppsVisible:(id)arg2 didSearchDuringSession:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXAppDirectorySessionMetadata:(id)arg1;
- (void)setDidSearchDuringSession:(bool)arg1;
- (void)setEngagedBundleId:(id)arg1;
- (void)setEngagedBundleIdInTopAppsVisible:(id)arg1;

@end

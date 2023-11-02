
@interface ATXSpotlightEventMetadata : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    NSNumber * _didSearchDuringSession;
    NSString * _engagedAppString;
    NSString * _queryAtEngagement;
    NSNumber * _searchEngagedActionType;
    NSString * _searchEngagedBundleId;
}

@property (nonatomic, retain) NSNumber *didSearchDuringSession;
@property (nonatomic, retain) NSString *engagedAppString;
@property (nonatomic, retain) NSString *queryAtEngagement;
@property (nonatomic, retain) NSNumber *searchEngagedActionType;
@property (nonatomic, retain) NSString *searchEngagedBundleId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)didSearchDuringSession;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedAppString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithQueryAtEngagement:(id)arg1 engagedAppString:(id)arg2 didSearchDuringSession:(id)arg3 searchEngagedBundleId:(id)arg4 searchEngagedActionType:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXSpotlightEventMetadata:(id)arg1;
- (id)proto;
- (id)queryAtEngagement;
- (id)searchEngagedActionType;
- (id)searchEngagedBundleId;
- (void)setDidSearchDuringSession:(id)arg1;
- (void)setEngagedAppString:(id)arg1;
- (void)setQueryAtEngagement:(id)arg1;
- (void)setSearchEngagedActionType:(id)arg1;
- (void)setSearchEngagedBundleId:(id)arg1;

@end

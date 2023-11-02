
@interface ATXSpotlightSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol> {
    unsigned char  _actionConsumerSubType;
    unsigned char  _appConsumerSubType;
    bool  _didSearchDuringSession;
    NSString * _engagedAppString;
}

@property (nonatomic) unsigned char actionConsumerSubType;
@property (nonatomic) unsigned char appConsumerSubType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSearchDuringSession;
@property (nonatomic, retain) NSString *engagedAppString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)actionConsumerSubType;
- (unsigned char)appConsumerSubType;
- (bool)checkAndReportDecodingFailureIfNeededForBOOL:(bool)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (bool)didSearchDuringSession;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedAppString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAppConsumerSubType:(unsigned char)arg1 actionConsumerSubType:(unsigned char)arg2;
- (id)initWithAppConsumerSubType:(unsigned char)arg1 actionConsumerSubType:(unsigned char)arg2 engagedAppString:(id)arg3 didSearchDuringSession:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXSpotlightSessionMetadata:(id)arg1;
- (void)setActionConsumerSubType:(unsigned char)arg1;
- (void)setAppConsumerSubType:(unsigned char)arg1;
- (void)setDidSearchDuringSession:(bool)arg1;
- (void)setEngagedAppString:(id)arg1;

@end

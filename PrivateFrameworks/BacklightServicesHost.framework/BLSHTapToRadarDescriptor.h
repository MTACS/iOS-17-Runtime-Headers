
@interface BLSHTapToRadarDescriptor : NSObject {
    NSString * _attachments;
    NSString * _bundleID;
    NSString * _classification;
    long long  _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    unsigned long long  _designation;
    NSString * _keywordIDs;
    NSString * _radarDescription;
    NSString * _radarTitle;
    NSString * _reproducibility;
    NSDate * _timeOfIssue;
    NSString * _ttrDisplayReason;
    NSString * _ttrPromptHeader;
    NSString * _ttrPromptMessage;
}

@property (nonatomic, copy) NSString *attachments;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *classification;
@property (nonatomic) long long componentID;
@property (nonatomic, copy) NSString *componentName;
@property (nonatomic, copy) NSString *componentVersion;
@property (nonatomic, readonly) unsigned long long designation;
@property (nonatomic, copy) NSString *keywordIDs;
@property (nonatomic, readonly) NSString *radarDescription;
@property (nonatomic, readonly) NSString *radarTitle;
@property (nonatomic, copy) NSString *reproducibility;
@property (nonatomic, copy) NSDate *timeOfIssue;
@property (nonatomic, copy) NSString *ttrDisplayReason;
@property (nonatomic, copy) NSString *ttrPromptHeader;
@property (nonatomic, copy) NSString *ttrPromptMessage;

- (void).cxx_destruct;
- (id)attachments;
- (id)bundleID;
- (id)classification;
- (long long)componentID;
- (id)componentName;
- (id)componentVersion;
- (unsigned long long)designation;
- (id)initWithDesignation:(unsigned long long)arg1 radarTitle:(id)arg2 radarDescription:(id)arg3;
- (id)keywordIDs;
- (id)radarDescription;
- (id)radarTitle;
- (id)reproducibility;
- (void)setAttachments:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setClassification:(id)arg1;
- (void)setComponentID:(long long)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setKeywordIDs:(id)arg1;
- (void)setReproducibility:(id)arg1;
- (void)setTimeOfIssue:(id)arg1;
- (void)setTtrDisplayReason:(id)arg1;
- (void)setTtrPromptHeader:(id)arg1;
- (void)setTtrPromptMessage:(id)arg1;
- (id)timeOfIssue;
- (id)toURL;
- (id)ttrDisplayReason;
- (id)ttrPromptHeader;
- (id)ttrPromptMessage;

@end

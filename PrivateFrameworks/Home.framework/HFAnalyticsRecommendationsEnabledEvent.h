
@interface HFAnalyticsRecommendationsEnabledEvent : HFAnalyticsEvent {
    NSString * _accessoryCategory;
    NSString * _configurationType;
    bool  _enabled;
    NSString * _presentationContext;
    double  _rank;
    int  _rankInt;
    int  _rankVersion;
    NSString * _serviceType;
    NSString * _source;
    bool  _success;
}

@property (nonatomic, retain) NSString *accessoryCategory;
@property (nonatomic, retain) NSString *configurationType;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSString *presentationContext;
@property (nonatomic) double rank;
@property (nonatomic) int rankInt;
@property (nonatomic) int rankVersion;
@property (nonatomic, retain) NSString *serviceType;
@property (nonatomic, retain) NSString *source;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (id)accessoryCategory;
- (id)configurationType;
- (bool)enabled;
- (id)initWithData:(id)arg1;
- (id)payload;
- (id)presentationContext;
- (double)rank;
- (int)rankInt;
- (int)rankVersion;
- (id)serviceType;
- (void)setAccessoryCategory:(id)arg1;
- (void)setConfigurationType:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPresentationContext:(id)arg1;
- (void)setRank:(double)arg1;
- (void)setRankInt:(int)arg1;
- (void)setRankVersion:(int)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (id)source;
- (bool)success;

@end


@interface AMSUIWebFetchMetricsIdentifierAction : AMSUIWebAction {
    ACAccount * _account;
    NSString * _bagNamespace;
    NSString * _bagProfile;
    NSString * _bagProfileVersion;
    bool  _crossDeviceSync;
    bool  _generateEventFields;
    NSString * _identifierKey;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *bagNamespace;
@property (nonatomic, retain) NSString *bagProfile;
@property (nonatomic, retain) NSString *bagProfileVersion;
@property (nonatomic) bool crossDeviceSync;
@property (nonatomic) bool generateEventFields;
@property (nonatomic, retain) NSString *identifierKey;

- (void).cxx_destruct;
- (id)account;
- (id)bagNamespace;
- (id)bagProfile;
- (id)bagProfileVersion;
- (bool)crossDeviceSync;
- (bool)generateEventFields;
- (id)identifierKey;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setAccount:(id)arg1;
- (void)setBagNamespace:(id)arg1;
- (void)setBagProfile:(id)arg1;
- (void)setBagProfileVersion:(id)arg1;
- (void)setCrossDeviceSync:(bool)arg1;
- (void)setGenerateEventFields:(bool)arg1;
- (void)setIdentifierKey:(id)arg1;

@end

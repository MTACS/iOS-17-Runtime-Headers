
@interface SVXTapToRadarRequiredContent : NSObject {
    NSNumber * _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSString * _displayReason;
    NSString * _error;
    NSString * _radarDescription;
    NSUUID * _requestID;
    NSString * _title;
}

@property (nonatomic, retain) NSNumber *componentID;
@property (nonatomic, retain) NSString *componentName;
@property (nonatomic, retain) NSString *componentVersion;
@property (nonatomic, retain) NSString *displayReason;
@property (nonatomic, retain) NSString *error;
@property (nonatomic, retain) NSString *radarDescription;
@property (nonatomic, retain) NSUUID *requestID;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)componentID;
- (id)componentName;
- (id)componentVersion;
- (id)displayReason;
- (id)error;
- (id)radarDescription;
- (id)requestID;
- (void)setComponentID:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setDisplayReason:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

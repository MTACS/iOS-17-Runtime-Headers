
@interface SOSKappaStatus : NSObject {
    long long  _sosKappaState;
    SOSStatus * _sosStatus;
}

@property (nonatomic, readonly) bool isKappaFlow;
@property (nonatomic, readonly) bool isKappaFlowActive;
@property (nonatomic) long long sosKappaState;
@property (nonatomic, readonly) SOSStatus *sosStatus;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSOSStatus:(id)arg1;
- (bool)isKappaFlow;
- (bool)isKappaFlowActive;
- (void)setSosKappaState:(long long)arg1;
- (long long)sosKappaState;
- (id)sosStatus;

@end

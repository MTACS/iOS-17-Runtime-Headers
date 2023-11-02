
@interface HKClinicalAuthorizationSequenceContext : NSObject {
    HKClinicalSourceAuthorizationController * _authorizationController;
    NSString * _readUsageDescription;
    HKSource * _source;
}

@property (nonatomic, retain) HKClinicalSourceAuthorizationController *authorizationController;
@property (nonatomic, copy) NSString *readUsageDescription;
@property (nonatomic, copy) HKSource *source;

- (void).cxx_destruct;
- (id)authorizationController;
- (id)readUsageDescription;
- (void)setAuthorizationController:(id)arg1;
- (void)setReadUsageDescription:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end

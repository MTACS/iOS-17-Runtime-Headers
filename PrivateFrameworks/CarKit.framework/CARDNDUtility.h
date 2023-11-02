
@interface CARDNDUtility : NSObject {
    CARAutomaticDNDStatus * _DNDStatus;
}

@property (nonatomic, retain) CARAutomaticDNDStatus *DNDStatus;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)DNDStatus;
- (id)init;
- (id)outputFromRhodesUtility;
- (void)setDNDStatus:(id)arg1;

@end

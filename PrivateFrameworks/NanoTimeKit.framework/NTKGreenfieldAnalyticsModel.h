
@interface NTKGreenfieldAnalyticsModel : NSObject {
    NSString * _addFaceFlowExitScreenName;
    NSDictionary * _complicationSlotToIdMapping;
    NSString * _distributionMechanism;
    NSError * _error;
    NSString * _errorMessage;
    NSSet * _purchasedComplicationsItemIds;
    NSString * _scannedCodeIdentifier;
    NSSet * _skippedComplicationsItemIds;
    NTKFace * _watchFace;
}

@property (nonatomic, copy) NSString *addFaceFlowExitScreenName;
@property (nonatomic, copy) NSDictionary *complicationSlotToIdMapping;
@property (nonatomic, copy) NSString *distributionMechanism;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSString *errorMessage;
@property (nonatomic, copy) NSSet *purchasedComplicationsItemIds;
@property (nonatomic, copy) NSString *scannedCodeIdentifier;
@property (nonatomic, copy) NSSet *skippedComplicationsItemIds;
@property (nonatomic, copy) NTKFace *watchFace;

- (void).cxx_destruct;
- (id)addFaceFlowExitScreenName;
- (id)complicationSlotToIdMapping;
- (id)distributionMechanism;
- (id)error;
- (id)errorMessage;
- (id)purchasedComplicationsItemIds;
- (id)scannedCodeIdentifier;
- (void)setAddFaceFlowExitScreenName:(id)arg1;
- (void)setComplicationSlotToIdMapping:(id)arg1;
- (void)setDistributionMechanism:(id)arg1;
- (void)setError:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setPurchasedComplicationsItemIds:(id)arg1;
- (void)setScannedCodeIdentifier:(id)arg1;
- (void)setSkippedComplicationsItemIds:(id)arg1;
- (void)setWatchFace:(id)arg1;
- (id)skippedComplicationsItemIds;
- (id)watchFace;

@end

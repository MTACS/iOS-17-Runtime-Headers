
@interface PFUbiquityMigrationAssistant : NSObject {
    NSMutableDictionary * _baselineLocationsByVersionHash;
    NSString * _currentModelVersionHash;
    NSString * _localPeerID;
    NSMutableDictionary * _logLocationsByVersionHash;
    NSMutableArray * _orderedReceipts;
    NSString * _previousModelVersionHash;
    NSMutableArray * _receiptLocations;
    NSString * _ubiquityName;
    PFUbiquityLocation * _ubiquityRootLocation;
}

- (void)dealloc;
- (id)initWithUbiquityRootLocation:(id)arg1 peerID:(id)arg2 ubiquityName:(id)arg3 modelVersionHash:(id)arg4;

@end

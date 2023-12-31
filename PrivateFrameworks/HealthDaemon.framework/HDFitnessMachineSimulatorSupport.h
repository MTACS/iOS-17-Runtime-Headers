
@interface HDFitnessMachineSimulatorSupport : NSObject {
    unsigned long long  _fitnessMachineType;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *btIdentifier;
@property (nonatomic, readonly) NSData *btIdentifierData;
@property (nonatomic, readonly) unsigned long long fitnessMachineType;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)btIdentifier;
- (id)btIdentifierData;
- (unsigned long long)fitnessMachineType;
- (id)initWithFitnessMachineType:(unsigned long long)arg1;
- (void)updateAdvertisementDataForSimulation:(id)arg1;
- (id)uuid;

@end

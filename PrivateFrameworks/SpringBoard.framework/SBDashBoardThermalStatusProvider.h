
@interface SBDashBoardThermalStatusProvider : NSObject <CSThermalStatusProviding> {
    SBThermalController * _thermalController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long thermalStatus;

+ (id)thermometerGlyphForThermalStatus:(long long)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithThermalController:(id)arg1;
- (long long)thermalStatus;

@end

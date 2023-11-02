
@interface MRIRNode : NSObject <MRRouteNodeRepresentable> {
    NSString * _avOutputDeviceIdentifier;
    NSString * _idsIdentifier;
    NSString * _rapportIdentifier;
}

@property (nonatomic, retain) NSString *avOutputDeviceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *idsIdentifier;
@property (nonatomic, retain) NSString *rapportIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)avOutputDeviceIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)idsIdentifier;
- (bool)isEqual:(id)arg1;
- (id)rapportIdentifier;
- (void)setAvOutputDeviceIdentifier:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setRapportIdentifier:(id)arg1;

@end

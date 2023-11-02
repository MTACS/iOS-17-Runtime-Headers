
@interface SBChargingSystemApertureElementProvider : NSObject <SAElementIdentifying> {
    NSString * _elementIdentifier;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)elementIdentifier;
- (id)init;
- (id)powerElementWithBatteryCapacity:(double)arg1;

@end

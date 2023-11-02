
@interface STWifiStatusDomainData : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    bool  _associatedToIOSHotspot;
    unsigned long long  _signalStrengthBars;
    bool  _wifiActive;
}

@property (getter=isAssociatedToIOSHotspot, nonatomic, readonly) bool associatedToIOSHotspot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long signalStrengthBars;
@property (readonly) Class superclass;
@property (getter=isWifiActive, nonatomic, readonly) bool wifiActive;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAssociatedToIOSHotspot;
- (bool)isEqual:(id)arg1;
- (bool)isWifiActive;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)signalStrengthBars;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

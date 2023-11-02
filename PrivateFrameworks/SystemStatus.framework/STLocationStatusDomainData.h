
@interface STLocationStatusDomainData : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    unsigned long long  _activeDisplayModes;
    STListData * _locationAttributionListData;
}

@property (nonatomic, readonly) unsigned long long activeDisplayModes;
@property (nonatomic, readonly, copy) NSArray *attributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) STListData *locationAttributionListData;
@property (nonatomic, readonly, copy) NSArray *locationAttributions;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithLocationAttributionListData:(id)arg1 activeDisplayModes:(unsigned long long)arg2;
- (unsigned long long)activeDisplayModes;
- (id)attributions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithLocationAttributionListData:(id)arg1 activeDisplayModes:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)locationAttributionListData;
- (id)locationAttributions;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

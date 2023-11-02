
@interface STStatusItemsStatusDomainData : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    STListData * _statusItemsAttributionListData;
    STDictionaryData * _visualDescriptorsByIdentifierDictionaryData;
}

@property (nonatomic, readonly, copy) NSSet *activeStatusItems;
@property (nonatomic, readonly, copy) NSArray *attributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) STListData *statusItemsAttributionListData;
@property (nonatomic, readonly, copy) NSSet *statusItemsWithVisualDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) STDictionaryData *visualDescriptorsByIdentifierDictionaryData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithStatusItemsAttributionListData:(id)arg1 visualDescriptorsByIdentifierDictionaryData:(id)arg2;
- (id)activeStatusItems;
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
- (id)initWithStatusItemsAttributionListData:(id)arg1 visualDescriptorsByIdentifierDictionaryData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)statusItemsAttributionListData;
- (id)statusItemsWithVisualDescriptors;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)visualDescriptorForStatusItemWithIdentifier:(id)arg1;
- (id)visualDescriptorsByIdentifierDictionaryData;

@end

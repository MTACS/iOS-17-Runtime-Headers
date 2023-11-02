
@interface STBackgroundActivitiesStatusDomainData : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    STListData * _backgroundActivitiesAttributionListData;
    STDictionaryData * _visualDescriptorsByIdentifierDictionaryData;
}

@property (nonatomic, readonly, copy) NSSet *activeBackgroundActivities;
@property (nonatomic, readonly, copy) NSArray *attributions;
@property (nonatomic, readonly, copy) STListData *backgroundActivitiesAttributionListData;
@property (nonatomic, readonly, copy) NSSet *backgroundActivitiesWithVisualDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) STDictionaryData *visualDescriptorsByIdentifierDictionaryData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithBackgroundActivitiesAttributionListData:(id)arg1 visualDescriptorsByIdentifierDictionaryData:(id)arg2;
- (id)activeBackgroundActivities;
- (id)attributions;
- (id)backgroundActivitiesAttributionListData;
- (id)backgroundActivitiesWithVisualDescriptors;
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
- (id)initWithBackgroundActivitiesAttributionListData:(id)arg1 visualDescriptorsByIdentifierDictionaryData:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)visualDescriptorForBackgroundActivityWithIdentifier:(id)arg1;
- (id)visualDescriptorsByIdentifierDictionaryData;

@end

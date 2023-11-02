
@interface INTypeCodableDescription : INCodableDescription <INWidgetPlistRepresentable> {
    NSString * _displayName;
    NSString * _displayNameLocID;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *displayNameLocID;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)__ClassNameKey;
+ (id)__ClassPrefixKey;
+ (id)__DisplayNameIDKey;
+ (id)__DisplayNameKey;
+ (id)__INCodableAttributeArraySizeSizeClassKey;
+ (id)__INCodableAttributeArraySizeSizeKey;
+ (id)__INCodableAttributeArraySizesKey;
+ (id)__INCodableAttributeConfigurableKey;
+ (id)__INCodableAttributeDefaultKey;
+ (id)__INCodableAttributeDisplayNameIDKey;
+ (id)__INCodableAttributeDisplayNameKey;
+ (id)__INCodableAttributeDisplayPriorityKey;
+ (id)__INCodableAttributeEntityKeypathKey;
+ (id)__INCodableAttributeEnumTypeKey;
+ (id)__INCodableAttributeFixedSizeArrayKey;
+ (id)__INCodableAttributeMetadataKey;
+ (id)__INCodableAttributeMetadataPlaceholderIDKey;
+ (id)__INCodableAttributeMetadataPlaceholderKey;
+ (id)__INCodableAttributeNameKey;
+ (id)__INCodableAttributePromptDialogKey;
+ (id)__INCodableAttributePromptDialogTypeKey;
+ (id)__INCodableAttributePromptDialogsKey;
+ (id)__INCodableAttributeRelationshipKey;
+ (id)__INCodableAttributeRelationshipParentNameKey;
+ (id)__INCodableAttributeRelationshipPredicateNameKey;
+ (id)__INCodableAttributeRelationshipPredicateValueKey;
+ (id)__INCodableAttributeRelationshipPredicateValuesKey;
+ (id)__INCodableAttributeSupportsDynamicEnumerationKey;
+ (id)__INCodableAttributeSupportsMultipleValuesKey;
+ (id)__INCodableAttributeSupportsResolutionKey;
+ (id)__INCodableAttributeSupportsSearchKey;
+ (id)__INCodableAttributeTagKey;
+ (id)__INCodableAttributeTypeKey;
+ (id)__INCodableAttributeUnsupportedReasonCodeKey;
+ (id)__INCodableAttributeUnsupportedReasonKey;
+ (id)__INCodableAttributeUnsupportedReasonsKey;
+ (id)__INCodableAttributeWindowSizeKey;
+ (id)__INCodableBooleanAttributeMetadataDefaultValueKey;
+ (id)__INCodableBooleanAttributeMetadataFalseDisplayNameIDKey;
+ (id)__INCodableBooleanAttributeMetadataFalseDisplayNameKey;
+ (id)__INCodableBooleanAttributeMetadataTrueDisplayNameIDKey;
+ (id)__INCodableBooleanAttributeMetadataTrueDisplayNameKey;
+ (id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodeKey;
+ (id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodesKey;
+ (id)__INCodableCustomObjectAttributeObjectTypeKey;
+ (id)__INCodableCustomObjectAttributeObjectTypeNamespaceKey;
+ (id)__INCodableDateComponentsAttributeMetadataDateStyleKey;
+ (id)__INCodableDateComponentsAttributeMetadataFormatKey;
+ (id)__INCodableDateComponentsAttributeMetadataTemplateIDKey;
+ (id)__INCodableDateComponentsAttributeMetadataTemplateKey;
+ (id)__INCodableDateComponentsAttributeMetadataTimeStyleKey;
+ (id)__INCodableDateComponentsAttributeMetadataTypeKey;
+ (id)__INCodableEnumAttributeEnumTypeKey;
+ (id)__INCodableEnumAttributeEnumTypeNamespaceKey;
+ (id)__INCodableEnumAttributeMetadataDefaultValueKey;
+ (id)__INCodableEnumAttributeMetadataKey;
+ (id)__INCodableFileAttributeMetadataCustomUTIsKey;
+ (id)__INCodableFileAttributeMetadataTypeKey;
+ (id)__INCodableMeasurementAttributeMetadataDefaultUnitKey;
+ (id)__INCodableMeasurementAttributeMetadataDefaultValueKey;
+ (id)__INCodableMeasurementAttributeMetadataSupportsNegativeNumbersKey;
+ (id)__INCodableMeasurementAttributeMetadataUnitKey;
+ (id)__INCodableNumberAttributeMetadataDefaultValueKey;
+ (id)__INCodableNumberAttributeMetadataMaximumValueKey;
+ (id)__INCodableNumberAttributeMetadataMinimumValueKey;
+ (id)__INCodableNumberAttributeMetadataSupportsNegativeNumbersKey;
+ (id)__INCodableNumberAttributeMetadataTypeKey;
+ (id)__INCodableObjectAttributeKey;
+ (id)__INCodableObjectAttributeTypeKey;
+ (id)__INCodablePersonAttributeMetadataKey;
+ (id)__INCodablePersonAttributeMetadataTypeKey;
+ (id)__INCodablePlacemarkAttributeMetadataKey;
+ (id)__INCodablePlacemarkAttributeMetadataTypeKey;
+ (id)__INCodableScalarAttributeKey;
+ (id)__INCodableScalarAttributeTypeKey;
+ (id)__INCodableStringAttributeMetadataCapitalizationKey;
+ (id)__INCodableStringAttributeMetadataDefaultValueIDKey;
+ (id)__INCodableStringAttributeMetadataDefaultValueKey;
+ (id)__INCodableStringAttributeMetadataDisableAutocorrectKey;
+ (id)__INCodableStringAttributeMetadataDisableSmartDashesKey;
+ (id)__INCodableStringAttributeMetadataDisableSmartQuotesKey;
+ (id)__INCodableStringAttributeMetadataMultilineKey;
+ (id)__INCodableTimeIntervalAttributeMetadataDefaultUnitKey;
+ (id)__INCodableTimeIntervalAttributeMetadataDefaultValueKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMaximumUnitKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMaximumValueKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMinimumUnitKey;
+ (id)__INCodableTimeIntervalAttributeMetadataMinimumValueKey;
+ (id)__INCodableTimeIntervalAttributeMetadataUnitKey;
+ (id)__INCodableURLAttributeMetadataDefaultValueKey;
+ (id)__INCodableURLAttributeMetadataKey;
+ (id)__Key;
+ (id)__NameKey;
+ (id)__PropertiesKey;
+ (id)__PropertyKey;
+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributeKey;
- (id)_attributesKey;
- (long long)codableDescriptionType;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (id)displayName;
- (id)displayNameLocID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedDisplayName;
- (id)localizedDisplayNameWithLocalizer:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameLocID:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_outputDisplayNameWithLocalizer:(id)arg1;

@end

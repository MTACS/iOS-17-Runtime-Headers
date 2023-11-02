
@interface NTKGreenfieldDraftRecipe : NSObject <NSSecureCoding> {
    NSMutableDictionary * _complicationUniqueIdentifierToOptionTypeMapping;
    NTKFace * _originalface;
    NSMutableDictionary * _slotToAppIdentifierMapping;
    NSMutableDictionary * _slotToItemIdMapping;
    NSMutableDictionary * _slotToSampleTemplateMapping;
    NSString * _tempPathOverride;
}

@property (nonatomic, readonly) NTKFace *faceForSharing;
@property (nonatomic, readonly) bool hasComplicationSharingOptions;
@property (nonatomic, copy) NSString *tempPathOverride;

+ (id)descriptionFromComplicationOption:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)templateForComplicationAtSlot:(id)arg1 face:(id)arg2;
+ (id)titleFromComplicationOption:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_buildOptionTypeMapping;
- (void)_buildSlotToItemIdAndBundleIdMapping;
- (void)_buildSlotToSampleTemplateMapping;
- (bool)_shouldIncludeMetadataForSlot:(id)arg1;
- (bool)canShareTemplate:(id)arg1 slot:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)faceForSharing;
- (unsigned long long)faceForSharingComplicationOptionsCount;
- (bool)hasComplicationSharingOptions;
- (id)initWithCoder:(id)arg1;
- (id)initWithFace:(id)arg1;
- (unsigned long long)optionForComplicationUniqueIdentifier:(id)arg1;
- (void)setComplicationOption:(unsigned long long)arg1 forComplicationUniqueIdentifier:(id)arg2;
- (void)setTempPathOverride:(id)arg1;
- (id)slotToBundleIdMapping;
- (id)slotToItemIdMapping;
- (id)slotToSampleTemplateMapping;
- (id)sortedComplicationSharingOptions;
- (id)tempPathOverride;

@end

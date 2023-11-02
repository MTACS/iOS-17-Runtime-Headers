
@interface NTKGreenfieldDecodedRecipe : NSObject <NSSecureCoding> {
    NSDictionary * _complicationSlotToBundleIdMapping;
    NSDictionary * _complicationSlotToItemIdMapping;
    NSDictionary * _complicationSlotToNameMapping;
    NSDictionary * _complicationSlotToTemplateMapping;
    NSDictionary * _complicationSlotToTemplateOverrideMapping;
    bool  _isUsingModifiedComplicationsSet;
    NSString * _noBorderFacePreviewImagePath;
    NSNumber * _senderBoxedDeviceSize;
    NTKFace * _watchFace;
}

@property (nonatomic, readonly) NSDictionary *complicationSlotToBundleIdMapping;
@property (nonatomic, readonly) NSDictionary *complicationSlotToItemIdMapping;
@property (nonatomic, readonly) NSDictionary *complicationSlotToNameMapping;
@property (nonatomic, readonly) NSDictionary *complicationSlotToTemplateMapping;
@property (nonatomic, readonly) NSString *noBorderFacePreviewImagePath;
@property (nonatomic, readonly) NSNumber *senderBoxedDeviceSize;
@property (nonatomic, readonly) bool wasModifiedForThisDevice;
@property (nonatomic, readonly) NTKFace *watchFace;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_overrideTemplateForComplication:(id)arg1 atSlot:(id)arg2 face:(id)arg3;
- (bool)_template:(id)arg1 isUnsupportedForComplication:(id)arg2;
- (void)collectOverrideTemplates;
- (id)complicationSlotToBundleIdMapping;
- (id)complicationSlotToItemIdMapping;
- (id)complicationSlotToNameMapping;
- (id)complicationSlotToTemplateMapping;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWatchFace:(id)arg1 complicationSlotToTemplateMapping:(id)arg2 complicationSlotToItemIdMapping:(id)arg3 complicationSlotToNameMapping:(id)arg4 complicationSlotToBundleIdMapping:(id)arg5 isUsingModifiedComplicationsSet:(bool)arg6 noBorderFacePreviewImagePath:(id)arg7 senderBoxedDeviceSize:(id)arg8;
- (id)noBorderFacePreviewImagePath;
- (id)senderBoxedDeviceSize;
- (bool)wasModifiedForThisDevice;
- (id)watchFace;

@end

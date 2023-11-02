
@interface HKAttachmentObjectIdentifierUtilities : NSObject

+ (id)_attachmentObjectIdentifierWithSampleTypeIdentifier:(id)arg1 bundleIdentifier:(id)arg2 FHIRResourceType:(id)arg3 FHIRResourceIdentifier:(id)arg4;
+ (id)attachmentObjectIdentifierForClinicalRecord:(id)arg1;
+ (id)attachmentObjectIdentifierForMedicalRecord:(id)arg1;
+ (bool)componentsFromAttachmentObjectIdentifier:(id)arg1 sampleTypeIdentifier:(id*)arg2 bundleIdentifier:(id*)arg3 FHIRIdentifier:(id*)arg4;

@end

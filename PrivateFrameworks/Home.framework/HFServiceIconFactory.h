
@interface HFServiceIconFactory : NSObject

+ (id)_defaultIconDescriptorForServiceType:(id)arg1 serviceSubtype:(id)arg2 fallbackToPlaceholderIcon:(bool)arg3;
+ (id)_iconSetForServiceType:(id)arg1 serviceSubtype:(id)arg2 fallbackToPlaceholderIcon:(bool)arg3;
+ (id)_multiSubtypeIconSetForServiceType:(id)arg1 serviceSubtype:(id)arg2;
+ (id)_replacementIdentifierForIconIdentifier:(id)arg1;
+ (id)allIconDescriptorsForService:(id)arg1;
+ (id)allIconDescriptorsForServiceType:(id)arg1 serviceSubtype:(id)arg2;
+ (id)defaultIconDescriptorForService:(id)arg1;
+ (id)defaultIconDescriptorForServiceType:(id)arg1 serviceSubtype:(id)arg2;
+ (id)defaultSymbolIconIdentifierForServiceType:(id)arg1;
+ (id)displayIconDescriptorFromIconDescriptor:(id)arg1 symbolName:(id)arg2;
+ (id)iconDescriptorForAccessory:(id)arg1;
+ (id)iconDescriptorForAccessoryCategory:(id)arg1;
+ (id)iconDescriptorForAccessoryCategoryOrServiceType:(id)arg1;
+ (id)iconDescriptorWithIdentifier:(id)arg1 forService:(id)arg2;
+ (id)iconDescriptorWithIdentifier:(id)arg1 forServiceType:(id)arg2 serviceSubtype:(id)arg3;
+ (id)iconModifiersForService:(id)arg1;
+ (id)overrideIconDescriptorForMultiServiceAccessory:(id)arg1 iconDescriptor:(id)arg2;

@end

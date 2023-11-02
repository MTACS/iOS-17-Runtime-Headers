
@interface PRSMutablePosterDescriptor : PRSPosterDescriptor

+ (id)mutableDescriptorWithIdentifier:(id)arg1;
+ (id)mutableDescriptorWithIdentifier:(id)arg1 role:(id)arg2;

- (bool)storeGalleryOptions:(id)arg1 error:(out id*)arg2;
- (bool)storeUserInfo:(id)arg1 error:(out id*)arg2;

@end

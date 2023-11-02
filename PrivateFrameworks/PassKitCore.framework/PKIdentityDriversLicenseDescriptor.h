
@interface PKIdentityDriversLicenseDescriptor : NSObject <PKIdentityDocumentDescriptor> {
    DIIdentityDriversLicenseDescriptor * _wrapped;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) DIIdentityDriversLicenseDescriptor *wrapped;

- (void).cxx_destruct;
- (void)addElements:(id)arg1 withIntentToStore:(id)arg2;
- (id)asDIIdentityDriversLicenseDescriptor;
- (id)description;
- (id)elements;
- (id)init;
- (id)initWithDIIdentityDriversLicenseDescriptor:(id)arg1;
- (id)intentToStoreForElement:(id)arg1;
- (void)setWrapped:(id)arg1;
- (id)wrapped;

@end

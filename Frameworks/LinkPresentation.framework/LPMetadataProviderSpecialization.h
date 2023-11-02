
@interface LPMetadataProviderSpecialization : NSObject {
    LPMetadataProviderSpecializationContext * _context;
    <LPMetadataProviderSpecializationDelegate> * _delegate;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) LPMetadataProviderSpecializationContext *context;
@property (nonatomic) <LPMetadataProviderSpecializationDelegate> *delegate;

+ (bool)generateSpecializedMetadataForCompleteMetadata:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (void)cancel;
- (id)context;
- (id)delegate;
- (id)initWithContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;

@end

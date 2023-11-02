
@interface DMTEmbeddedDataResetBackedErasePrimitives : NSObject <DMTErasePrimitives>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)performEraseWithCompletion:(id /* block */)arg1;

@end

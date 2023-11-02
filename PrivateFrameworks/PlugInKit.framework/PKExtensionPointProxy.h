
@interface PKExtensionPointProxy : NSObject <PKExtensionPointProxy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *platform;
@property (nonatomic, readonly) NSDictionary *sdkEntry;
@property (readonly) Class superclass;

+ (id)extensionPointForIdentifier:(id)arg1 platform:(id)arg2;

- (id)platform;
- (id)sdkEntry;

@end

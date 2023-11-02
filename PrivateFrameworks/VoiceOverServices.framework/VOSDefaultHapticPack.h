
@interface VOSDefaultHapticPack : NSObject <VOSHapticPack>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *eventToHapticFilenameMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)eventToHapticFilenameMapping;
- (id)hapticAssetURLForOutputEvent:(id)arg1;

@end

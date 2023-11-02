
@interface VOSDefaultSoundPack : NSObject <VOSSoundPack>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *eventToSoundFilenameMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)eventToSoundFilenameMapping;
- (id)soundAssetURLForOutputEvent:(id)arg1;

@end

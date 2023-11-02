
@interface SASAcousticFeature : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *acousticFeaturePerFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *frameDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)acousticFeature;
+ (id)acousticFeatureWithDictionary:(id)arg1 context:(id)arg2;

- (id)acousticFeaturePerFrame;
- (id)encodedClassName;
- (id)frameDuration;
- (id)groupIdentifier;
- (void)setAcousticFeaturePerFrame:(id)arg1;
- (void)setFrameDuration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_acousticFeature;

@end

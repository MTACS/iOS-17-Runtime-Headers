
@interface SANPGetVolumeLevelResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *volumeValue;

+ (id)getVolumeLevelResponse;
+ (id)getVolumeLevelResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setVolumeValue:(id)arg1;
- (id)volumeValue;

@end

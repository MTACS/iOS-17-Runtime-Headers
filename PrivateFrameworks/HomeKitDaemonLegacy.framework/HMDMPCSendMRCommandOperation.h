
@interface HMDMPCSendMRCommandOperation : HMFOperation <HMFLogging, HMFObject> {
    MPCAssistantRemoteControlDestination * _destination;
    <HMDMPCSendMRCommandOperationExternalObjectInterface> * _externalObjectInterface;
    NSNumber * _mediaRemoteCommand;
    NSDictionary * _options;
    MPPlaybackArchive * _playbackArchive;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPCAssistantRemoteControlDestination *destination;
@property (readonly) <HMDMPCSendMRCommandOperationExternalObjectInterface> *externalObjectInterface;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *mediaRemoteCommand;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, readonly) MPPlaybackArchive *playbackArchive;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (id)destination;
- (id)externalObjectInterface;
- (id)initWithCommand:(unsigned int)arg1 destination:(id)arg2 options:(id)arg3 externalObjectInterface:(id)arg4;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2 destination:(id)arg3;
- (id)initWithPlaybackArchive:(id)arg1 destination:(id)arg2 options:(id)arg3 externalObjectInterface:(id)arg4;
- (id)initWithPlaybackArchive:(id)arg1 options:(id)arg2 destination:(id)arg3;
- (void)main;
- (id)mediaRemoteCommand;
- (id)options;
- (id)playbackArchive;
- (id)privateDescription;
- (id)shortDescription;

@end

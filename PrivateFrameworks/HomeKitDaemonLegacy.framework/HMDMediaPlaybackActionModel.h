
@interface HMDMediaPlaybackActionModel : HMDActionModel

@property (nonatomic, retain) NSSet *accessories;
@property (nonatomic, retain) MPPlaybackArchive *encodedPlaybackArchive;
@property (nonatomic, retain) NSSet *profiles;
@property (nonatomic, retain) NSSet *services;
@property (nonatomic, retain) NSNumber *state;
@property (nonatomic, retain) NSNumber *volume;

+ (id)properties;
+ (id)schemaHashRoot;

- (id)dependentUUIDs;
- (void)loadModelWithActionInformation:(id)arg1;
- (bool)validForStorage;
- (id)validate;

@end


@interface LPMedia : NSObject {
    unsigned int  _ioMedia;
}

@property unsigned int ioMedia;

+ (unsigned int)_copyIOMediaForDiskWithPath:(id)arg1;
+ (unsigned int)_copyLiveFilesystemIOMediaForRootedSnapshot;
+ (id)allMedia;
+ (id)contentTypeToSubclassMap;
+ (bool)hasEmbeddedDeviceTypeRoot;
+ (id)liveMediaForSnapshotAtPath:(id)arg1;
+ (id)mediaForBSDNameOrDeviceNode:(id)arg1;
+ (id)mediaForPath:(id)arg1;
+ (id)mediaForPath:(id)arg1 isSnapshot:(bool*)arg2;
+ (id)mediaForPath:(id)arg1 snapshotName:(id*)arg2;
+ (id)mediaForUUID:(id)arg1;
+ (id)mediaOfCorrectTypeGivenIOMedia:(unsigned int)arg1;
+ (id)snapshotNameForMediaForPath:(id)arg1;
+ (id)supportedContentTypes;
+ (void)waitForBlockStorage;
+ (void)waitForIOMediaWithDevNode:(id)arg1;

- (id)BSDName;
- (id)content;
- (void)dealloc;
- (id)description;
- (id)devNodePath;
- (bool)getBoolPropertyWithName:(id)arg1;
- (id)getPropertyWithName:(id)arg1;
- (id)getStringPropertyWithName:(id)arg1;
- (id)initWithIOMediaObject:(unsigned int)arg1;
- (unsigned int)ioMedia;
- (bool)isEmbeddedDeviceTypeRoot;
- (bool)isEqual:(id)arg1;
- (bool)isInternal;
- (bool)isJournaled;
- (bool)isPrimaryMedia;
- (bool)isReadOnly;
- (bool)isWhole;
- (id)mediaUUID;
- (id)mountPoint;
- (id)name;
- (void)setIoMedia:(unsigned int)arg1;
- (bool)setName:(id)arg1 withError:(id*)arg2;
- (id)wholeMediaForMedia;

@end

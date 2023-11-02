
@interface MIStashedBundleContainer : MIRelocatedBundleContainer {
    MIStashMetadata * _stashMetadata;
}

@property (nonatomic, retain) MIStashMetadata *stashMetadata;
@property (nonatomic, readonly) NSURL *stashMetadataURL;

- (void).cxx_destruct;
- (id)newStashMetadata;
- (bool)saveStashMetadata:(id)arg1 withError:(id*)arg2;
- (void)setStashMetadata:(id)arg1;
- (id)stashMetadata;
- (id)stashMetadataURL;
- (id)stashMetadataWithError:(id*)arg1;

@end

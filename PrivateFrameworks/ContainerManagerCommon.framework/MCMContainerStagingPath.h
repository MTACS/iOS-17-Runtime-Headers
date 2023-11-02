
@interface MCMContainerStagingPath : MCMContainerPath {
    MCMContainerPath * _destinationContainerPath;
}

@property (nonatomic, retain) MCMContainerPath *destinationContainerPath;

+ (Class)_containerClassPathClass;
+ (id)stagingContainerPathForDestinationContainerPath:(id)arg1 stagingPathIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)destinationContainerPath;
- (void)setDestinationContainerPath:(id)arg1;

@end

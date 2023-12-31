
@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage {
    NSURL * _URL;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (void)performReadWithAccessor:(id /* block */)arg1;
- (bool)readOnly;
- (bool)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id*)arg3 didCopyDataToBundle:(bool*)arg4;

@end

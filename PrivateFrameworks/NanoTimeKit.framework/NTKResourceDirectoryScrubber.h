
@interface NTKResourceDirectoryScrubber : NSObject {
    NSDictionary * _operationsMaps;
}

- (void).cxx_destruct;
- (bool)_scrubAssetAtURL:(id)arg1 toDestinationURL:(id)arg2 error:(id*)arg3;
- (id)initWithOperations:(id)arg1;
- (bool)scrubDirectoryAtPath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3;

@end

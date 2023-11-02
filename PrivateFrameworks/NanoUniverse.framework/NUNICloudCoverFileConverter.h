
@interface NUNICloudCoverFileConverter : NSObject <NUNIFileConverter> {
    NSObject<OS_dispatch_queue> * _privateQueue;
}

- (void).cxx_destruct;
- (bool)_combineFilesAt:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (bool)_convertFileAt:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (bool)combineFilesAt:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (bool)convertFileAt:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (id)init;

@end

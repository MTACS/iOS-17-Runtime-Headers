
@interface CLKUIMetalBinaryArchive : NSObject {
    NSString * _archiveName;
    <MTLBinaryArchive> * _mtlBinaryArchive;
}

@property (nonatomic, retain) <MTLBinaryArchive> *mtlBinaryArchive;

+ (id)archiveWithName:(id)arg1 bundle:(id)arg2 device:(id)arg3;

- (void).cxx_destruct;
- (bool)_binaryArchivesFeatureEnabled;
- (bool)_hasBinaryArchive;
- (bool)_shouldUseBinaryArchives;
- (id)initWithName:(id)arg1 bundle:(id)arg2 device:(id)arg3;
- (id)loadMTLBinaryArchiveNamed:(id)arg1 inBundle:(id)arg2 forDevice:(id)arg3;
- (void)logElapsedTimeWithStart:(double)arg1 category:(unsigned long long)arg2 name:(id)arg3 usingBinaryArchive:(bool)arg4;
- (id)mtlBinaryArchive;
- (id)newFunctionInLibrary:(id)arg1 withDescriptor:(id)arg2;
- (id)newRenderPipelineStateForDevice:(id)arg1 withDescriptor:(id)arg2;
- (void)setMtlBinaryArchive:(id)arg1;

@end

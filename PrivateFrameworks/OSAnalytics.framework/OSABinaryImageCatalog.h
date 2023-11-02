
@interface OSABinaryImageCatalog : NSObject {
    OSABinaryImageSegment * _absolute_segment;
    OSABinaryImageSegment * _kernel_cache_segment;
    NSMutableArray * _kernel_segments;
    NSMutableArray * _kernel_text_exec_segments;
    NSMutableArray * _notes;
    NSMutableArray * _rootedCacheLibs;
    NSMutableDictionary * _shared_segments;
    OSABinaryImageSegment * _targeted_cache;
    unsigned long long  _targeted_slide;
    NSMutableArray * _used_segments;
}

+ (bool)isApplePath:(id)arg1 orBundle:(id)arg2;

- (void).cxx_destruct;
- (void)appendNotesTo:(id)arg1;
- (id)init;
- (bool)isAddressInTargetedCache:(unsigned long long)arg1;
- (unsigned long long)markImageAsUsed:(id)arg1 from:(int)arg2;
- (id)reportUsedImages;
- (id)reportUsedImagesFullInfoUsingBlock:(id /* block */)arg1;
- (id)searchFrame:(unsigned long long)arg1 in:(id)arg2 regions:(id)arg3 result:(id*)arg4;
- (id)searchFrame:(unsigned long long)arg1 in:(id)arg2 result:(id*)arg3;
- (void)setKernelCache:(unsigned char)arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)setKernelImages:(id)arg1;
- (void)setKernelTextExecImages:(id)arg1;
- (void)setRootedCacheLibs:(struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg1 count:(unsigned int)arg2;
- (void)targetSharedCache:(unsigned char)arg1 withSlide:(unsigned long long)arg2 atBaseAddress:(unsigned long long)arg3;

@end

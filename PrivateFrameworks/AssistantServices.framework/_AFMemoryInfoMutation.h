
@interface _AFMemoryInfoMutation : NSObject <AFMemoryInfoMutating> {
    AFMemoryInfo * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasVirtualMemorySizeInBytes : 1; 
        unsigned int hasNumberOfRegions : 1; 
        unsigned int hasPageSizeInBytes : 1; 
        unsigned int hasResidentMemorySizeInBytes : 1; 
        unsigned int hasPeakResidentMemorySizeInBytes : 1; 
        unsigned int hasPhysicalMemoryFootprintInBytes : 1; 
    }  _mutationFlags;
    int  _numberOfRegions;
    int  _pageSizeInBytes;
    unsigned long long  _peakResidentMemorySizeInBytes;
    unsigned long long  _physicalMemoryFootprintInBytes;
    unsigned long long  _residentMemorySizeInBytes;
    unsigned long long  _virtualMemorySizeInBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)getNumberOfRegions;
- (int)getPageSizeInBytes;
- (unsigned long long)getPeakResidentMemorySizeInBytes;
- (unsigned long long)getPhysicalMemoryFootprintInBytes;
- (unsigned long long)getResidentMemorySizeInBytes;
- (unsigned long long)getVirtualMemorySizeInBytes;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setNumberOfRegions:(int)arg1;
- (void)setPageSizeInBytes:(int)arg1;
- (void)setPeakResidentMemorySizeInBytes:(unsigned long long)arg1;
- (void)setPhysicalMemoryFootprintInBytes:(unsigned long long)arg1;
- (void)setResidentMemorySizeInBytes:(unsigned long long)arg1;
- (void)setVirtualMemorySizeInBytes:(unsigned long long)arg1;

@end


@interface MTLDebugInstrumentationData : NSObject {
    const void * _data;
    NSObject<OS_dispatch_data> * _dataMap;
    /* Warning: unhandled struct encoding: '{vector<MTLDebugLocation *, std::allocator<MTLDebugLocation *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<MTLDebugLocation **, std::allocator<MTLDebugLocation *>>="__value_"^@}}' */ struct vector<MTLDebugLocation *, std::allocator<MTLDebugLocation *>> { 
        __end_ **__begin_; 
    }  _debugLocations;
    /* Warning: unhandled struct encoding: '{vector<MTLDebugSubProgram *, std::allocator<MTLDebugSubProgram *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<MTLDebugSubProgram **, std::allocator<MTLDebugSubProgram *>>="__value_"^@}}' */ struct vector<MTLDebugSubProgram *, std::allocator<MTLDebugSubProgram *>> { 
        __end_ **__begin_; 
    }  _debugSubPrograms;
    NSData * _globalConstantsData;
    struct vector<const __CFString *, std::allocator<const __CFString *>> { 
        struct __CFString {} **__begin_; 
        struct __CFString {} **__end_; 
        struct __compressed_pair<const __CFString **, std::allocator<const __CFString *>> { 
            struct __CFString {} **__value_; 
        } __end_cap_; 
    }  _strings;
    NSObject<OS_dispatch_data> * _userReflectionData;
}

@property (nonatomic, readonly) unsigned int activeThreadgroupMask;
@property (nonatomic, readonly) unsigned long long bufferAccessMask;
@property (nonatomic, readonly) bool hasArgumentBufferInstrumentationFailures;
@property (nonatomic, readonly) bool hasArgumentLimitsInstrumentationFailures;
@property (nonatomic, readonly) bool hasGlobalConstantsInstrumentationFailures;
@property (nonatomic, readonly) unsigned int threadgroupArgumentOffset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)activeThreadgroupMask;
- (unsigned long long)bufferAccessMask;
- (void)dealloc;
- (id)debugLocationForID:(unsigned int)arg1;
- (id)debugSubProgramForID:(unsigned int)arg1;
- (id)globalConstantsData;
- (bool)hasArgumentBufferInstrumentationFailures;
- (bool)hasArgumentLimitsInstrumentationFailures;
- (bool)hasGlobalConstantsInstrumentationFailures;
- (id)initWithData:(id)arg1;
- (id)stringForID:(unsigned int)arg1;
- (unsigned int)threadgroupArgumentOffset;
- (id)userReflectionData;

@end

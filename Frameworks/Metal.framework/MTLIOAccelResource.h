
@interface MTLIOAccelResource : _MTLResource <MTLResourceSPI> {
    struct _MTLIOAccelResource { 
        union { 
            unsigned long long reserved[4]; 
        } vendor; 
        struct IOAccelResourceInfo { 
            struct __IOSurface {} *iosurface; 
            unsigned int resourceSize : 56; 
            unsigned int iosurfaceField : 8; 
            unsigned int resourceID; 
        } info; 
        unsigned long long sharedAllocationUniqueId; 
        unsigned long long cachedAllocationUniqueId; 
        unsigned long long gpuAddress; 
        MTLIOAccelDevice<MTLDevice> *device; 
        NSString *label; 
        unsigned long long globalTraceObjectID; 
        unsigned long long labelTraceID; 
        struct __IOAccelResource {} *resourceRef; 
        struct IOAccelClientSharedRO {} *clientSharedRO; 
        struct IOAccelClientSharedRW {} *clientSharedRW; 
        void *virtualAddress; 
        unsigned long long options; 
        unsigned long long storageMode; 
        unsigned long long cpuCacheMode; 
        int responsibleProcess; 
        unsigned long long purgeableState; 
        bool purgeableAllowed; 
        MTLResourceAllocationInfo *sharedAllocationInfo; 
        MTLResourceAllocationInfo *cachedAllocationInfo; 
        MTLIOAccelHeap *heap; 
        MTLIOAccelResource *resource; 
        unsigned long long offset; 
        unsigned long long length; 
        bool pinned; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } labelLock; 
    }  _res;
    MTLIOAccelResource * next;
    MTLIOAccelResource * prev;
    unsigned long long  uniqueId;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long gpuHandle;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (copy) NSString *label;
@property (readonly) unsigned long long protectionOptions;
@property (nonatomic, readonly) unsigned int resourceID;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) struct __IOAccelResource { }*resourceRef;
@property (nonatomic, readonly) unsigned long long resourceSize;
@property int responsibleProcess;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (nonatomic, readonly) void*virtualAddress;

- (unsigned long long)allocatedSize;
- (unsigned long long)allocationID;
- (void)annotateResource:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(struct __CFString { }*)arg2 obj_dict:(struct __CFDictionary { }*)arg3;
- (struct __CFArray { }*)copyAnnotations;
- (unsigned long long)cpuCacheMode;
- (void)dealloc;
- (id)device;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (unsigned long long)gpuAddress;
- (unsigned long long)gpuHandle;
- (unsigned long long)hazardTrackingMode;
- (id)heap;
- (unsigned long long)heapOffset;
- (id)initMemoryless:(id)arg1 descriptor:(id)arg2;
- (id)initStandinWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14; unsigned long long x_1_1_15; unsigned long long x_1_1_16; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_17_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_17_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_17_2_3; struct { unsigned int x_4_3_1; unsigned int x_4_3_2; unsigned long long x_4_3_3[3]; } x_17_2_4; } x_1_1_17; } x1; }*)arg3 argsSize:(unsigned int)arg4;
- (id)initWithResource:(id)arg1;
- (bool)isAliasable;
- (bool)isComplete;
- (bool)isPurgeable;
- (id)label;
- (void)makeAliasable;
- (unsigned long long)protectionOptions;
- (unsigned int)resourceID;
- (unsigned long long)resourceOptions;
- (struct __IOAccelResource { }*)resourceRef;
- (unsigned long long)resourceSize;
- (int)responsibleProcess;
- (id)retainedLabel;
- (void)setLabel:(id)arg1;
- (int)setOwnerWithIdentity:(unsigned int)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)setResponsibleProcess:(int)arg1;
- (unsigned long long)storageMode;
- (unsigned long long)unfilteredResourceOptions;
- (void*)virtualAddress;
- (void)waitUntilComplete;

@end

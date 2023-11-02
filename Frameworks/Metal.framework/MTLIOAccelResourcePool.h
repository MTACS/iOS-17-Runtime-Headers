
@interface MTLIOAccelResourcePool : NSObject {
    MTLIOAccelDevice<MTLDevice> * _device;
    struct _MTLIOAccelResourcePoolPrivate { 
        struct _MTLIOAccelResourceQueue { 
            MTLIOAccelPooledResource *tqh_first; 
            id *tqh_last; 
        } volatileQueue; 
        struct _MTLIOAccelResourceQueue { 
            MTLIOAccelPooledResource *tqh_first; 
            id *tqh_last; 
        } nonvolatileQueue; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        int count; 
    }  _priv;
    struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14; unsigned long long x_1_1_15; unsigned long long x_1_1_16; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_17_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_17_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_17_2_3; struct { unsigned int x_4_3_1; unsigned int x_4_3_2; unsigned long long x_4_3_3[3]; } x_17_2_4; } x_1_1_17; } x1; } * _resourceArgs;
    unsigned int  _resourceArgsSize;
    Class  _resourceClass;
    unsigned long long  age_to_purge;
    unsigned int  generation;
}

@property (readonly) struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14; unsigned long long x_1_1_15; unsigned long long x_1_1_16; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_17_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_17_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_17_2_3; struct { unsigned int x_4_3_1; unsigned int x_4_3_2; unsigned long long x_4_3_3[3]; } x_17_2_4; } x_1_1_17; } x1; }*resourceArgs;
@property (readonly) unsigned int resourceArgsSize;

- (int)availableCount;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 resourceArgs:(const struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14; unsigned long long x_1_1_15; unsigned long long x_1_1_16; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_17_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_17_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_17_2_3; struct { unsigned int x_4_3_1; unsigned int x_4_3_2; unsigned long long x_4_3_3[3]; } x_17_2_4; } x_1_1_17; } x1; }*)arg3 resourceArgsSize:(unsigned int)arg4 options:(id)arg5;
- (void)purge;
- (void)purgeWithLock;
- (struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14; unsigned long long x_1_1_15; unsigned long long x_1_1_16; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_17_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_17_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_17_2_3; struct { unsigned int x_4_3_1; unsigned int x_4_3_2; unsigned long long x_4_3_3[3]; } x_17_2_4; } x_1_1_17; } x1; }*)resourceArgs;
- (unsigned int)resourceArgsSize;
- (void)setResourceArgs:(const struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14; unsigned long long x_1_1_15; unsigned long long x_1_1_16; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_17_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_17_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_17_2_3; struct { unsigned int x_4_3_1; unsigned int x_4_3_2; unsigned long long x_4_3_3[3]; } x_17_2_4; } x_1_1_17; } x1; }*)arg1 resourceArgsSize:(unsigned int)arg2;
- (bool)updateResourcePurgeability;

@end

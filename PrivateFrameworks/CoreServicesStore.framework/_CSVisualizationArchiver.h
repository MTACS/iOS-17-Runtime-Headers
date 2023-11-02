
@interface _CSVisualizationArchiver : NSObject {
    bool  _closeWhenDone;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dictWriteLock;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _fileHandle;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _hadEPIPE;
    bool  _outputAsXML;
    unsigned long long  _stats;
    NSPredicate * _unitDescriptionPredicate;
    _CSVisualizer * _visualizer;
}

@property (nonatomic, retain) NSPredicate *unitDescriptionPredicate;
@property (readonly) _CSVisualizer *visualizer;

+ (void)beginProvidingVisualizationArchivesWithMachServiceName:(id)arg1 queue:(id)arg2 creatingVisualizersWithBlock:(id /* block */)arg3;
+ (void)processCommandFromConnection:(void*)arg1 fileHandle:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 providerBlock:(id /* block */)arg3;
+ (void)provideVisualizerToConnection:(void*)arg1 fileHandle:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 providerBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (void)finishWriting;
- (bool)fwrite:(const void*)arg1 size:(unsigned long long)arg2 numberOfItems:(unsigned long long)arg3 error:(id*)arg4;
- (void)getWriteUnitState:(struct _CSWriteUnitState { id x1; id /* block */ x2; id /* block */ x3; id x4; }*)arg1 forTable:(unsigned int)arg2;
- (id)initWithVisualizer:(id)arg1 fileHandle:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 closeWhenDone:(bool)arg3 allowCompression:(bool)arg4 error:(id*)arg5;
- (id)initWithVisualizer:(id)arg1 fileHandle:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 closeWhenDone:(bool)arg3 error:(id*)arg4;
- (void)setUnitDescriptionPredicate:(id)arg1;
- (id)unitDescriptionPredicate;
- (id)visualizer;
- (void)writeAllUnitsInTable:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)writeAllUnitsWithBlock:(id /* block */)arg1;
- (bool)writeDictionary:(id)arg1 error:(id*)arg2;
- (bool)writeMetadata:(id)arg1 forStore:(struct __CSStore { }*)arg2 error:(id*)arg3;
- (void)writeUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (void)writeUnit:(unsigned int)arg1 inTable:(unsigned int)arg2 state:(const struct _CSWriteUnitState { id x1; id /* block */ x2; id /* block */ x3; id x4; }*)arg3;

@end

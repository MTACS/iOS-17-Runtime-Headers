
@interface JSVirtualMachine : NSObject {
    struct RetainPtr<NSMapTable> { 
        void *m_ptr; 
    }  m_contextCache;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                    _Atomic unsigned char __a_value; 
                } __a_; 
            } value; 
        } m_byte; 
    }  m_externalDataMutex;
    struct RetainPtr<NSMapTable> { 
        void *m_ptr; 
    }  m_externalObjectGraph;
    struct RetainPtr<NSMapTable> { 
        void *m_ptr; 
    }  m_externalRememberedSet;
    struct OpaqueJSContextGroup { } * m_group;
}

@property (readonly) struct OpaqueJSContextGroup { }*JSContextGroupRef;

+ (void)setCrashOnVMCreation:(bool)arg1;
+ (unsigned long long)setNumberOfDFGCompilerThreads:(unsigned long long)arg1;
+ (unsigned long long)setNumberOfFTLCompilerThreads:(unsigned long long)arg1;
+ (id)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup { }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueJSContextGroup { }*)JSContextGroupRef;
- (void)addContext:(id)arg1 forGlobalContextRef:(struct OpaqueJSContext { }*)arg2;
- (void)addExternalRememberedObject:(id)arg1;
- (void)addManagedReference:(id)arg1 withOwner:(id)arg2;
- (id)contextForGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
- (void)dealloc;
- (void*)externalDataMutex;
- (id)externalObjectGraph;
- (id)externalRememberedSet;
- (id)init;
- (id)initWithContextGroupRef:(struct OpaqueJSContextGroup { }*)arg1;
- (bool)isOldExternalObject:(id)arg1;
- (bool)isWebThreadAware;
- (void)removeManagedReference:(id)arg1 withOwner:(id)arg2;
- (void)shrinkFootprintWhenIdle;

@end

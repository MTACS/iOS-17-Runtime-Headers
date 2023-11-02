
@interface SCNCommonProfileProgramGenerator : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _programMutex;
    struct __CFDictionary { } * _shaders;
    struct __CFDictionary { } * _trackedResourcesToHashcode;
}

@property (nonatomic, readonly) int profile;

+ (id)generatorWithProfile:(int)arg1 allowingHotReload:(bool)arg2;

- (void)dealloc;
- (void)emptyShaderCache;
- (id)init;
- (int)profile;
- (struct __C3DFXProgram { }*)programWithHashCode:(struct __C3DProgramHashCode { }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 trackedResource:(id)arg3 introspectionDataPtr:(void*)arg4;
- (void)releaseProgramForResource:(id)arg1;

@end


@interface PHASEGlobalMetaParameterAsset : PHASEAsset {
    struct unique_ptr<Phase::MetaParameter, std::default_delete<Phase::MetaParameter>> { 
        struct __compressed_pair<Phase::MetaParameter *, std::default_delete<Phase::MetaParameter>> { 
            struct MetaParameter {} *__value_; 
        } __ptr_; 
    }  _metaParamOwnedAsset;
    const void * _metaParamReference;
    struct MetaParamState { 
        struct MetaParameter {} *param; 
        struct Fader<double> { 
            struct Envelope<double> { 
                struct vector<Phase::Envelope<double>::SegmentInternal, std::allocator<Phase::Envelope<double>::SegmentInternal>> { 
                    struct SegmentInternal {} *__begin_; 
                    struct SegmentInternal {} *__end_; 
                    struct __compressed_pair<Phase::Envelope<double>::SegmentInternal *, std::allocator<Phase::Envelope<double>::SegmentInternal>> { 
                        struct SegmentInternal {} *__value_; 
                    } __end_cap_; 
                } mSegments; 
            } mEnvelope; 
            double mOffset; 
            double mDefaultValue; 
            double mValue; 
        } mFader; 
        union MetaParamValue { 
            double fltVal; 
            unsigned long long stringVal; 
        } currentInputValue; 
    }  _metaParamState;
}

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)getMetaParamState;
- (const void*)getMetaParameter;
- (id)init;
- (id)initWithUID:(id)arg1 assetRegistry:(id)arg2;
- (id)initWithUID:(id)arg1 metaParameterWeakReference:(const void*)arg2 assetRegistry:(id)arg3;
- (id)initWithUID:(id)arg1 ownedMetaParameter:(struct unique_ptr<Phase::MetaParameter, std::default_delete<Phase::MetaParameter>> { struct __compressed_pair<Phase::MetaParameter *, std::default_delete<Phase::MetaParameter>> { struct MetaParameter {} *x_1_1_1; } x1; })arg2 assetRegistry:(id)arg3;
- (unsigned long long)sizeInBytes;

@end

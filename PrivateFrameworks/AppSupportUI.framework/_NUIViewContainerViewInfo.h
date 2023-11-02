
@interface _NUIViewContainerViewInfo : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentInsets;
    struct { 
        double baseLineFromTop; 
        double baseLineFromBottom; 
    }  _baselines;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedAlignmentInsets;
    struct { 
        unsigned int neverCacheLayoutSize : 1; 
        unsigned int shouldCacheLayoutSize : 1; 
        unsigned int alsoInvalidateSuperview : 1; 
        unsigned int cachedAlignmentInsetsAreValid : 1; 
        unsigned int topBaselineIsCustom : 1; 
        unsigned int bottomBaselineIsCustom : 1; 
    }  _flags;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    struct nui_size_cache { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<CGSize, CGSize> *, std::allocator<std::pair<CGSize, CGSize>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _sizeCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end


@interface MTLIOAccelPooledResource : MTLIOAccelResource {
    struct _MTLIOAccelResourcePrivate { 
        MTLIOAccelResourcePool *pool; 
        struct { 
            MTLIOAccelPooledResource *tqe_next; 
            id *tqe_prev; 
        } entry; 
        unsigned long long time_added; 
        unsigned int pool_generation; 
    }  _priv;
}

@end

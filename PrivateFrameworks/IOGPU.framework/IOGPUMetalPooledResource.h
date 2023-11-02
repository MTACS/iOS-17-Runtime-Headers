
@interface IOGPUMetalPooledResource : IOGPUMetalResource {
    struct _IOGPUMetalResourcePrivate { 
        IOGPUMetalResourcePool *pool; 
        struct { 
            IOGPUMetalPooledResource *tqe_next; 
            id *tqe_prev; 
        } entry; 
        unsigned long long time_added; 
        unsigned int pool_generation; 
    }  _priv;
}

@end

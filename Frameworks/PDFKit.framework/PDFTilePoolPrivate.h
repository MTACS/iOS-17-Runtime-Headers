
@interface PDFTilePoolPrivate : NSObject {
    int  surfaceType;
    NSMutableDictionary * surfaces;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  surfacesLock;
    NSObject<OS_dispatch_queue> * workQueue;
}

- (void).cxx_destruct;

@end

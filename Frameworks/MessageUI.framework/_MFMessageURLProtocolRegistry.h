
@interface _MFMessageURLProtocolRegistry : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _storage;
}

@property (nonatomic, readonly) NSMapTable *storage;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)contentRepresentationForURL:(id)arg1;
- (id)init;
- (void)registerContentRepresentation:(id)arg1;
- (id)storage;

@end


@interface TCSCallLog : NSObject {
    NSMutableDictionary * _calls;
    NSMutableOrderedSet * _identifiers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSMutableDictionary *calls;
@property (nonatomic, retain) NSMutableOrderedSet *identifiers;

- (void).cxx_destruct;
- (void)_trimCache;
- (void)addCall:(id)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)calls;
- (id)identifiers;
- (id)init;
- (void)setCalls:(id)arg1;
- (void)setIdentifiers:(id)arg1;

@end

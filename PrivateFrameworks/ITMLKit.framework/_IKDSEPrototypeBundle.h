
@interface _IKDSEPrototypeBundle : NSObject {
    NSMutableArray * _entries;
    struct { 
        bool areEntriesDirty; 
    }  _flags;
    NSMutableArray * _prototypes;
}

- (void).cxx_destruct;
- (void)addPrototype:(id)arg1 forIndexes:(id)arg2;
- (id)allPrototypes;
- (id)init;
- (id)prototypeForItemAtIndex:(unsigned long long)arg1;

@end

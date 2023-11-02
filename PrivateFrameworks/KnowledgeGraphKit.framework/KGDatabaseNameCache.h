
@interface KGDatabaseNameCache : NSObject {
    NSMutableDictionary * _attrIdByPropertyName;
    unsigned long long  _highestAttrId;
    unsigned long long  _highestLabelId;
    NSMutableDictionary * _labelIdByName;
    NSMutableDictionary * _labelNameById;
    bool  _loaded;
    bool  _loadedInThisTransaction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _propertyNameByAttrId;
    bool  _readOnly;
    unsigned long long  _useCount;
}

- (void).cxx_destruct;
- (void)_addLabelName:(id)arg1 identifier:(id)arg2 database:(id)arg3;
- (void)_addPropertyName:(id)arg1 identifier:(id)arg2 database:(id)arg3;
- (void)_loadCacheIfNeeded:(id)arg1;
- (void)addLabelName:(id)arg1 identifier:(id)arg2 database:(id)arg3;
- (void)addPropertyName:(id)arg1 identifier:(id)arg2 database:(id)arg3;
- (id)attrIdentifierForPropertyName:(id)arg1 database:(id)arg2;
- (id)init;
- (id)labelIdentifierForName:(id)arg1 database:(id)arg2;
- (id)labelNameForIdentifier:(id)arg1 database:(id)arg2;
- (id)propertyNameForIdentifier:(id)arg1 database:(id)arg2;
- (void)setWritable;
- (void)transactionEnd;
- (void)unloadCache;

@end


@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {
    struct optional<NSString *> { 
        union { 
            BOOL __null_state_; 
            id __val_; 
            /* Warning: Unrecognized filer type: ')' using 'void*' */ void*NSString; 
            bool __engaged_; 
        } ; 
    }  _cachedSystemMode;
    NSArray * _extensionIdentifiers;
    NSArray * _extensionPointIdentifiers;
    id /* block */  _filterBlock;
    NSDictionary * _queryDict;
    struct unfair_lock_mutex { 
        unsigned int _os_unfair_lock_opaque; 
    }  _systemModeMutex;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)_initWithQueryDictionary:(id)arg1 applyFilter:(id /* block */)arg2;
- (id)_queryDictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesPlugin:(unsigned int)arg1 pluginData:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; }*)arg2 withDatabase:(id)arg3;
- (id)systemMode;

@end

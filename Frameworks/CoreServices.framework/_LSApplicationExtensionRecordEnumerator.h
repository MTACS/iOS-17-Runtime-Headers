
@interface _LSApplicationExtensionRecordEnumerator : _LSRecordEnumerator {
    NSString * _extensionPointID;
    LSExtensionPointRecord * _extensionPointRecord;
    id /* block */  _filterBlock;
    unsigned long long  _options;
    unsigned int  _platform;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _plugins;
    LSPropertyList * _propertyList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_evaluatePluginNoIO:(unsigned int)arg1 data:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; }*)arg2 extensionPointID:(unsigned int)arg3 context:(struct LSContext { id x1; }*)arg4;
- (bool)_getExtensionPointID:(unsigned int*)arg1 context:(struct LSContext { id x1; }*)arg2 error:(id*)arg3;
- (bool)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext { id x1; }*)arg3;
- (bool)_prepareWithContext:(struct LSContext { id x1; }*)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 filter:(id /* block */)arg3;
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 platform:(unsigned int)arg3;
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 platform:(unsigned int)arg3 filter:(id /* block */)arg4;

@end

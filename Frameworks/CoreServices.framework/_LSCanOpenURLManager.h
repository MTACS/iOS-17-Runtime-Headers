
@interface _LSCanOpenURLManager : NSObject {
    NSMutableDictionary * _canOpenURLsMap;
    NSObject<OS_dispatch_queue> * _canOpenURLsMapQueue;
    int  _saveFlag;
}

@property (readonly) unsigned long long schemeQueryLimit;

+ (struct BindingEvaluator { id x1; id x2; id x3; id x4; id x5; id x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; id x8; bool x9; bool x10; unsigned long long x11; unsigned int x12; unsigned int x13; struct vector<LSBundleClass, std::allocator<LSBundleClass>> { unsigned int *x_14_1_1; unsigned int *x_14_1_2; struct __compressed_pair<LSBundleClass *, std::allocator<LSBundleClass>> { unsigned int *x_3_2_1; } x_14_1_3; } x14; id /* block */ x15; id x16; id /* block */ x17; id x18; })bindingEvaluatorForScheme:(id)arg1;
+ (id)queryForApplicationsAvailableForOpeningURL:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)canOpenURL:(id)arg1 publicSchemes:(bool)arg2 privateSchemes:(bool)arg3 XPCConnection:(id)arg4 error:(id*)arg5;
- (id)copySchemesMap;
- (bool)findApplicationBundleID:(unsigned int*)arg1 bundleData:(const struct LSBundleData {}**)arg2 context:(struct LSContext { id x1; }*)arg3 forXPCConnection:(id)arg4;
- (void)getIsURL:(id)arg1 alwaysCheckable:(bool*)arg2 hasHandler:(bool*)arg3;
- (id)init;
- (bool)internalCanOpenURL:(id)arg1 publicSchemes:(bool)arg2 privateSchemes:(bool)arg3 XPCConnection:(id)arg4 error:(id*)arg5;
- (bool)isBundleID:(unsigned int)arg1 bundleData:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg2 context:(struct LSContext { id x1; }*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5;
- (bool)isXPCConnection:(id)arg1 allowedToCheckScheme:(id)arg2 error:(id*)arg3;
- (bool)legacy_isBundleID:(unsigned int)arg1 bundleData:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg2 context:(struct LSContext { id x1; }*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5;
- (void)resetSchemeQueryLimitForApplicationWithIdentifier:(id)arg1;
- (unsigned long long)schemeQueryLimit;
- (long long)schemeTypeOfScheme:(id)arg1;
- (void)writeSchemesMap;

@end

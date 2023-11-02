
@interface _LSBindingForLog : NSObject {
    struct LSBinding { 
        unsigned int bundle; 
        struct LSBundleData {} *bundleData; 
        unsigned int claim; 
        struct { /* ? */ } *claimData; 
        id userInfo; 
        NSString *reason; 
    }  _binding;
    _LSDatabase * _db;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initWithState:(const void*)arg1 binding:(const struct LSBinding { unsigned int x1; struct LSBundleData {} *x2; unsigned int x3; struct { /* ? */ } *x4; id x5; id x6; }*)arg2;
- (id)redactedDescription;

@end


@interface SSPlistDataReader : NSObject {
    struct _MDPlistContainer { } * _container;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _obj;
}

@property (nonatomic, readonly, copy) NSMutableArray *allKeys;
@property (nonatomic, readonly) NSArray *blocklist;
@property (nonatomic, readonly) unsigned long long count;

- (id)allKeys;
- (id)blocklist;
- (struct _MDPlistContainer { }*)container;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (bool)doesBundleExistInAppAllowList:(id)arg1;
- (double)doubleValueForBundle:(id)arg1;
- (double)doubleValueForKey:(const char *)arg1;
- (id)initWithPlistContainer:(struct _MDPlistContainer { }*)arg1;
- (id)initWithPlistContainer:(struct _MDPlistContainer { }*)arg1 obj:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg2;

@end

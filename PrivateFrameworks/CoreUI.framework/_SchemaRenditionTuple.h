
@interface _SchemaRenditionTuple : NSObject {
    NSMutableDictionary * info;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  key;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;

@end

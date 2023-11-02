
@interface NWConcrete_nw_storage_flush_item : NSObject <OS_nw_storage_flush_item> {
    char * _key;
    char * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;

@end

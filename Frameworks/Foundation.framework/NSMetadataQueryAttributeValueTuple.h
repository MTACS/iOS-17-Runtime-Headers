
@interface NSMetadataQueryAttributeValueTuple : NSObject {
    id  _attr;
    unsigned long long  _count;
    void * _reserved;
    id  _value;
}

@property (readonly, copy) NSString *attribute;
@property (readonly) unsigned long long count;
@property (readonly, retain) id value;

- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4;
- (id)attribute;
- (unsigned long long)count;
- (void)dealloc;
- (id)value;

@end


@interface TBTileItemDescriptor : NSObject <TBTileRequestItem> {
    NSString * _etag;
    NSNumber * _key;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *etag;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *key;
@property (readonly) Class superclass;

+ (id)tileItemDescriptorWithKey:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)etag;
- (id)initWithKey:(id)arg1 etag:(id)arg2;
- (id)key;
- (void)setEtag:(id)arg1;
- (void)setKey:(id)arg1;

@end

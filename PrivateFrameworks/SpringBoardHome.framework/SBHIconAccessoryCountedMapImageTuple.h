
@interface SBHIconAccessoryCountedMapImageTuple : NSObject <SBCountedMapValue> {
    <NSCopying><NSObject> * _countedMapKey;
    unsigned long long  _hash;
    UIImage * _image;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, copy) <NSCopying><NSObject> *sbh_countedMapKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)image;
- (id)initWithImage:(id)arg1 countedMapKey:(id)arg2;
- (id)initWithImage:(id)arg1 countedMapKey:(id)arg2 hash:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)sbh_countedMapKey;

@end

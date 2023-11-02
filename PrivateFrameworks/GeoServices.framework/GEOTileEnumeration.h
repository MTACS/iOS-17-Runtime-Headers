
@interface GEOTileEnumeration : NSObject <GEOXPCSerializable> {
    double  _age;
    bool  _current;
    GEOTileData * _data;
    NSString * _eTag;
    NSData * _key;
    unsigned char  _originalLoadReason;
}

@property (nonatomic) double age;
@property (nonatomic) bool current;
@property (nonatomic, retain) GEOTileData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *eTag;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *key;
@property (nonatomic) unsigned char originalLoadReason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)age;
- (bool)current;
- (id)data;
- (id)eTag;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (id)key;
- (unsigned char)originalLoadReason;
- (void)setAge:(double)arg1;
- (void)setCurrent:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setETag:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setOriginalLoadReason:(unsigned char)arg1;

@end

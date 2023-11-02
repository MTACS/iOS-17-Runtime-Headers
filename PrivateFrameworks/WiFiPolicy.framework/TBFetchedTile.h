
@interface TBFetchedTile : NSObject <NSCopying, TBTile> {
    NSDate * _created;
    NSString * _etag;
    unsigned long long  _key;
}

@property (nonatomic, copy) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *etag;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long key;
@property (nonatomic, readonly) unsigned long long networkCount;
@property (readonly) Class superclass;

+ (id)fetchedTileWithKey:(unsigned long long)arg1 etag:(id)arg2 created:(id)arg3;

- (void).cxx_destruct;
- (bool)_isEqualToFetchedTile:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)created;
- (id)description;
- (id)etag;
- (unsigned long long)hash;
- (id)initWithKey:(unsigned long long)arg1 etag:(id)arg2 created:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)key;
- (void)setCreated:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setKey:(unsigned long long)arg1;

@end

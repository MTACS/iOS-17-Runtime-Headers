
@interface BLTHashCacheItem : NSObject {
    NSData * _MD5;
    NSData * _data;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSURL * _url;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSURL *url;

+ (id)hashCacheItemWithData:(id)arg1 URL:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (id)MD5;
- (id)data;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithURL:(id)arg1 data:(id)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end


@interface GDVUContext : NSObject {
    void inner;
}

@property (nonatomic, copy) NSUUID *asset;
@property (nonatomic, copy) NSUUID *moment;
@property (nonatomic) long long source;

- (void).cxx_destruct;
- (id)asset;
- (id)init;
- (id)moment;
- (void)setAsset:(id)arg1;
- (void)setMoment:(id)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

@end

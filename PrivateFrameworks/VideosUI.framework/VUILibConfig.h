
@interface VUILibConfig : NSObject {
    long long  _collectionItemLimit;
}

@property (nonatomic) long long collectionItemLimit;

- (long long)collectionItemLimit;
- (id)init;
- (void)setCollectionItemLimit:(long long)arg1;

@end

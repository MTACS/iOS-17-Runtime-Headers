
@interface BLTBulletinStorageSection : NSObject {
    NSMutableDictionary * _bulletinIDToBulletin;
    NSMutableArray * _bulletins;
    unsigned long long  _maxContextSize;
    unsigned long long  _totalContextSize;
}

@property (nonatomic, readonly) NSMutableDictionary *bulletinIDToBulletin;
@property (nonatomic, readonly) NSMutableArray *bulletins;
@property (nonatomic, readonly) unsigned long long maxContextSize;
@property (nonatomic, readonly) unsigned long long totalContextSize;

- (void).cxx_destruct;
- (id)addOrReplaceBulletin:(id)arg1;
- (id)bulletinIDToBulletin;
- (id)bulletins;
- (id)initWithMaxContextSize:(unsigned long long)arg1;
- (unsigned long long)maxContextSize;
- (void)removeBulletin:(id)arg1;
- (unsigned long long)totalContextSize;

@end

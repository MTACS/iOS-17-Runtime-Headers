
@interface PHPersistentChange : NSObject {
    PHChange * _change;
    PHPersistentChangeToken * _changeToken;
}

@property (nonatomic, readonly) PHPersistentChangeToken *changeToken;

- (void).cxx_destruct;
- (id)changeDetailsForObjectType:(long long)arg1 error:(id*)arg2;
- (id)changeToken;
- (id)initWithChange:(id)arg1;

@end

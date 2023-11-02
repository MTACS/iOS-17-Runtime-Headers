
@interface CPLTransaction : NSObject {
    bool  _dirty;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

+ (void)beginTransactionWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(bool)arg3;
+ (void)endTransactionWithIdentifier:(id)arg1;
+ (id)newTransactionWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(bool)arg3;
+ (unsigned long long)transactionCount;
+ (id)transactions;

- (void).cxx_destruct;
- (void)dealloc;
- (void)endTransaction;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2 keepPower:(bool)arg3;

@end

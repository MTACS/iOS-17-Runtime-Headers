
@interface NAIdentityCharacteristic : NSObject <NAEquatable, NAHashable, NSCopying> {
    id /* block */  _comparisonBlock;
    id /* block */  _hashBlock;
    id /* block */  _retrievalBlock;
    long long  _role;
}

@property (nonatomic, copy) id /* block */ comparisonBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ hashBlock;
@property (nonatomic, copy) id /* block */ retrievalBlock;
@property (nonatomic) long long role;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)comparisonBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id /* block */)hashBlock;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id /* block */)retrievalBlock;
- (long long)role;
- (void)setComparisonBlock:(id /* block */)arg1;
- (void)setHashBlock:(id /* block */)arg1;
- (void)setRetrievalBlock:(id /* block */)arg1;
- (void)setRole:(long long)arg1;

@end
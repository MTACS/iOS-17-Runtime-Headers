
@interface FCHCBlockExpectation : NSObject <FCHCExpectation> {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void)validate;

@end

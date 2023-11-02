
@interface SBSABounceRequest : NSObject <SBSARequestRepresenting> {
    long long  _style;
    id /* block */  _triggeredBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ triggeredBlock;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStyle:(long long)arg1 triggeredBlock:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (long long)style;
- (id /* block */)triggeredBlock;

@end


@interface NUBlockBasedURLModifier : NSObject <NUURLModifying> {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)modifierWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1;
- (id)modifyURL:(id)arg1;
- (void)setBlock:(id /* block */)arg1;

@end

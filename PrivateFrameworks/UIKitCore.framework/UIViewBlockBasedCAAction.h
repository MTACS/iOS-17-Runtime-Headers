
@interface UIViewBlockBasedCAAction : NSObject <CAAction> {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (id)initWithActionBlock:(id /* block */)arg1;
- (id)initWithEmptyBlock:(id /* block */)arg1;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;

@end

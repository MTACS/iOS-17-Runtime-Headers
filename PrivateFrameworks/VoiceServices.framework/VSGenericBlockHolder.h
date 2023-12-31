
@interface VSGenericBlockHolder : NSObject <VSGenericUpdate> {
    id /* block */  _block;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)arg1;
- (void)invokeUpdateWithObject:(id)arg1;

@end

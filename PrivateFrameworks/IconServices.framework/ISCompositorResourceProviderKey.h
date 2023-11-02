
@interface ISCompositorResourceProviderKey : NSObject <ISCompositorResource> {
    unsigned long long  _flags;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (retain) NSString *name;
@property (readonly) Class superclass;

+ (id)resourceKeyWithName:(id)arg1 flags:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)flags;
- (id)name;
- (void)setFlags:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end

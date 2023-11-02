
@interface PHASETapInterfaceImpl : NSObject <PHASETapInterface> {
    PHASETapRegistry * _tapRegistry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PHASETapRegistry *tapRegistry;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTapRegistry:(id)arg1;
- (id)tapRegistry;

@end

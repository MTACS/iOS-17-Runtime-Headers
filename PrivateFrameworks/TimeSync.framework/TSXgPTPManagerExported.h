
@interface TSXgPTPManagerExported : NSObject <TSXgPTPManagerClientProtocol> {
    TSXgPTPManager * _object;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) TSXgPTPManager *object;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)object;
- (void)setObject:(id)arg1;

@end

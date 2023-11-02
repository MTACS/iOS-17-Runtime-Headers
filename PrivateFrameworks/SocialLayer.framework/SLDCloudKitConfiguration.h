
@interface SLDCloudKitConfiguration : NSObject {
    CKContainer * _container;
    NSString * _name;
}

@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)container;
- (id)name;
- (void)setContainer:(id)arg1;
- (void)setName:(id)arg1;

@end

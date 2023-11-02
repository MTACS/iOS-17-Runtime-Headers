
@interface _HKXPCExportedObjectProxy : NSObject {
    id  _weakExportedObject;
    Class  _weakExportedObjectClass;
}

@property (nonatomic) id weakExportedObject;
@property (nonatomic, retain) Class weakExportedObjectClass;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setWeakExportedObject:(id)arg1;
- (void)setWeakExportedObjectClass:(Class)arg1;
- (id)weakExportedObject;
- (Class)weakExportedObjectClass;

@end

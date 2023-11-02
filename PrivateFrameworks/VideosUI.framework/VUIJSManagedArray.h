
@interface VUIJSManagedArray : NSObject {
    NSArray * _managedArray;
    id  _ownerObject;
}

@property (nonatomic, retain) NSArray *managedArray;
@property (nonatomic, retain) id ownerObject;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithArray:(id)arg1 ownerObject:(id)arg2;
- (id)jsValuesWithContext:(id)arg1;
- (id)managedArray;
- (id)ownerObject;
- (void)setManagedArray:(id)arg1;
- (void)setOwnerObject:(id)arg1;

@end

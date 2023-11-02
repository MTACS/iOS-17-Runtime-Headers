
@interface PXExistingMemoriesDebugCollectionItem : NSObject {
    NSString * _description;
    PHMemory * _memory;
    NSString * _name;
}

@property (readonly) NSString *description;
@property (readonly) PHMemory *memory;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMemory:(id)arg1;
- (id)memory;
- (id)name;

@end

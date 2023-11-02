
@interface FSMimicPopulator : NSObject {
    FSMimic * _mimic;
    FSNode * _node;
}

@property (nonatomic, readonly) FSMimic *mimic;

- (void).cxx_destruct;
- (id)initWithNode:(id)arg1;
- (id)mimic;
- (bool)populateHFSTypeAndCreatorWithError:(id*)arg1;
- (void)populateHasChildNodeWithRelativePath:(id)arg1;
- (bool)populateSimpleSelector:(SEL)arg1 error:(id*)arg2;
- (bool)populateValueForKey:(id)arg1 error:(id*)arg2;

@end


@interface PSMain : NSObject

- (void)addEmitter:(id)arg1;
- (void)addReplicator:(id)arg1;
- (void)applicationDidFinishLaunching;
- (bool)canAddEmitterToDoc:(void*)arg1;
- (id)init;
- (void)setupEmitter:(void*)arg1 inDoc:(void*)arg2;
- (bool)validateAction:(SEL)arg1;

@end

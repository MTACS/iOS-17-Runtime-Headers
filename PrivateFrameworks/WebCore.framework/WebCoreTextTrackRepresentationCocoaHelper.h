
@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject <CALayerDelegate> {
    void * _parent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property void*parent;
@property (readonly) Class superclass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithParent:(void*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void*)parent;
- (void)setParent:(void*)arg1;

@end

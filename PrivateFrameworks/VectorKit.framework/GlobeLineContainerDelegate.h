
@interface GlobeLineContainerDelegate : NSObject <VKGlobeLineContainerDelegate> {
    void * _renderer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithRenderer:(void*)arg1;
- (void)lineContainerNeedsDisplay:(id)arg1;

@end

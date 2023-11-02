
@interface AXContainerManager : NSObject {
    AXUIClient * _containerServerClient;
}

@property (nonatomic, retain) AXUIClient *containerServerClient;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)containerServerClient;
- (void)deleteFileAtAccessibilityContainerPath:(id)arg1 completion:(id /* block */)arg2;
- (void)readDataForFileAtAccessibilityContainerPath:(id)arg1 completion:(id /* block */)arg2;
- (void)setContainerServerClient:(id)arg1;
- (void)writeData:(id)arg1 toFileAtAccessibilityContainerPath:(id)arg2 completion:(id /* block */)arg3;

@end

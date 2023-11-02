
@interface SeymourUI.CompletedWorkoutShareArtworkItemProvider : NSItemProvider {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  artwork;
    void assetClient;
    void renderer;
    void size;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithItem:(id)arg1 typeIdentifier:(id)arg2;
- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end


@interface _UIDocumentMenuHeader : UIDocumentProperties

@property (nonatomic, copy) id /* block */ dragItemProvider;
@property (nonatomic, readonly) NSURL *url;

- (id /* block */)dragItemProvider;
- (void)setDragItemProvider:(id /* block */)arg1;

@end


@interface CoreDAVFolderContentsMultiGetTask : CoreDAVContainerMultiGetTask

- (id)copyAdditionalPropElements;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;

@end

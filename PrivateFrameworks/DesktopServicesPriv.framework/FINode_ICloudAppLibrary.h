
@interface FINode_ICloudAppLibrary : FIDSNode {
    FINode * _documentsFolder;
}

@property (nonatomic, retain) FINode *documentsFolder;

- (void).cxx_destruct;
- (void)dispatchEvent:(id)arg1 forObserver:(id)arg2;
- (id)documentsFolder;
- (id)fetchLastUsedDate:(bool)arg1;
- (id)fetchTags:(bool)arg1;
- (id)iteratorIncludingInvisibleItems:(bool)arg1 synchronous:(bool)arg2;
- (id)nodesToObserve;
- (id)propertyAsDate:(unsigned int)arg1;
- (id)propertyAsNumber:(unsigned int)arg1;
- (void)setDocumentsFolder:(id)arg1;

@end

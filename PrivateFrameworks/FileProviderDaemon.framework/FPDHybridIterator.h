
@interface FPDHybridIterator : FPDIterator {
    FPDIterator * _datalessFolderIterator;
    FPDDiskIterator * _diskIterator;
    FPDDomain * _domain;
    bool  _done;
    bool  _enforceFPItem;
    bool  _insideADatalessFolder;
    FPItem * _rootItem;
    NSURL * _rootURL;
    unsigned long long  _totalDatalessFoldersPopped;
}

- (void).cxx_destruct;
- (void)dealloc;
- (bool)done;
- (id)error;
- (id)initWithItem:(id)arg1 domain:(id)arg2 enforceFPItem:(bool)arg3;
- (id)nextWithError:(id*)arg1;
- (unsigned long long)numFoldersPopped;

@end

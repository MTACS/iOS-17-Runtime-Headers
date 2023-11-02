
@interface ICSectionController : NSObject {
    _UIDiffableDataSourceOutlineSectionController * _outlineSectionController;
    unsigned long long  _sectionControllerType;
}

@property (nonatomic, readonly) _UIDiffableDataSourceOutlineSectionController *outlineSectionController;
@property (nonatomic, readonly) unsigned long long sectionControllerType;

- (void).cxx_destruct;
- (id)initWithDiffableDataSource:(id)arg1 sectionControllerType:(unsigned long long)arg2;
- (id)outlineSectionController;
- (unsigned long long)sectionControllerType;
- (id)snapshotForSection:(id)arg1;

@end

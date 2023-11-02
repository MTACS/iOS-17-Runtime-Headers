
@interface PXFeedHitTestResult : PXGHitTestResult {
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _dataSourceIndexPath;
    id /* block */  _hoverAction;
    PXSectionedObjectReference * _objectReference;
    id /* block */  _presentMenuAction;
    id /* block */  _primaryAction;
    id /* block */  _touchAction;
}

@property (nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } dataSourceIndexPath;
@property (nonatomic, readonly) id /* block */ hoverAction;
@property (nonatomic, readonly) PXSectionedObjectReference *objectReference;
@property (nonatomic, readonly) id /* block */ presentMenuAction;
@property (nonatomic, readonly) id /* block */ primaryAction;
@property (nonatomic, readonly) id /* block */ touchAction;

- (void).cxx_destruct;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })dataSourceIndexPath;
- (id /* block */)hoverAction;
- (id)hoverAction:(id /* block */)arg1;
- (id)initWithSpriteIndex:(unsigned int)arg1 layout:(id)arg2;
- (id)initWithSpriteIndex:(unsigned int)arg1 layout:(id)arg2 identifier:(id)arg3;
- (id)objectReference;
- (id)objectReference:(id)arg1;
- (id /* block */)presentMenuAction;
- (id)presentMenuAction:(id /* block */)arg1;
- (id /* block */)primaryAction;
- (id)primaryAction:(id /* block */)arg1;
- (void)setDataSourceIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id /* block */)touchAction;
- (id)touchAction:(id /* block */)arg1;

@end

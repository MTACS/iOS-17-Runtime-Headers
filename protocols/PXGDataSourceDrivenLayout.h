
@protocol PXGDataSourceDrivenLayout <NSObject>

@required

- (void)applySectionedChangeDetails:(void *)arg1 dataSourceBeforeChanges:(void *)arg2 dataSourceAfterChanges:(void *)arg3 sublayoutProvider:(void *)arg4 outChangedSections:(void *)arg5 outSectionsWithItemChanges:(void *)arg6 changeMediaVersionHandler:(void *)arg7; // needs 7 arg types, found 13: NSArray *, PXSectionedDataSource *, PXSectionedDataSource *, <PXGSublayoutProvider> *, id*, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; }, struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; }, void*
- (void)applySectionedChangeDetailsForSingleSection:(void *)arg1 dataSourceBeforeChanges:(void *)arg2 dataSourceAfterChanges:(void *)arg3 changeMediaVersionHandler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, PXSectionedDataSource *, PXSectionedDataSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; }, struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; }, void*

@end

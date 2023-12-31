
@interface TSTLayoutTask : NSObject {
    NSMutableArray * mCellStatesToLayout;
    TSTMasterLayout * mMasterLayout;
}

@property (nonatomic, retain) NSMutableArray *cellStatesToLayout;

- (id)cellStatesToLayout;
- (void)dealloc;
- (void)flushToGlobalCaches;
- (id)initWithMasterLayout:(id)arg1;
- (void)setCellStatesToLayout:(id)arg1;

@end

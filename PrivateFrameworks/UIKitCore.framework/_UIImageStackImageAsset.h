
@interface _UIImageStackImageAsset : UIImageAsset {
    CUICatalog * _catalog;
    NSData * _stackData;
}

@property (nonatomic, retain) CUICatalog *catalog;
@property (nonatomic, copy) NSData *stackData;

- (void).cxx_destruct;
- (id)catalog;
- (id)imageWithConfiguration:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)setCatalog:(id)arg1;
- (void)setStackData:(id)arg1;
- (id)stackData;

@end

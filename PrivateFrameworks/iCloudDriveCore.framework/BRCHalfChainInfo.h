
@interface BRCHalfChainInfo : NSObject {
    BRFieldCKInfo * _ckInfo;
    CKRecord * _record;
}

@property (nonatomic, readonly) BRFieldCKInfo *ckInfo;
@property (nonatomic, retain) CKRecord *record;

- (void).cxx_destruct;
- (id)ckInfo;
- (id)initWithRecord:(id)arg1 ckInfo:(id)arg2;
- (id)record;
- (void)setRecord:(id)arg1;

@end

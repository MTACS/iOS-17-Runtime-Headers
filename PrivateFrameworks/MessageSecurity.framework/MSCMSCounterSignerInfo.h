
@interface MSCMSCounterSignerInfo : MSCMSSignerInfo {
    MSCMSSignerInfo * _containingSignerInfo;
}

@property (nonatomic) MSCMSSignerInfo *containingSignerInfo;

- (void).cxx_destruct;
- (id)calculateSignerInfoDigest:(id*)arg1;
- (id)certificates;
- (id)containingSignerInfo;
- (bool)createRequiredAttributes:(id*)arg1;
- (void)setContainingSignerInfo:(id)arg1;
- (bool)verifyContentTypeAttribute:(id*)arg1;

@end

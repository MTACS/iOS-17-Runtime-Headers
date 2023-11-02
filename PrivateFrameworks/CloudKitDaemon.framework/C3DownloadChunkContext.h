
@interface C3DownloadChunkContext : NSObject {
    CKDMMCS * _MMCS;
    NSMutableDictionary * _signatureToMutableData;
}

@property (nonatomic) CKDMMCS *MMCS;
@property (nonatomic, retain) NSMutableDictionary *signatureToMutableData;

- (void).cxx_destruct;
- (id)MMCS;
- (id)initWithMMCS:(id)arg1;
- (void)setMMCS:(id)arg1;
- (void)setSignatureToMutableData:(id)arg1;
- (id)signatureToMutableData;

@end

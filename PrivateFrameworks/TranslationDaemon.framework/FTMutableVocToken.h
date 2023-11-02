
@interface FTMutableVocToken : FTVocToken

@property (nonatomic, copy) NSData *blob;
@property (nonatomic, copy) NSString *orthography;

- (id)blob;
- (void)blob:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)orthography;
- (void)setBlob:(id)arg1;
- (void)setOrthography:(id)arg1;

@end

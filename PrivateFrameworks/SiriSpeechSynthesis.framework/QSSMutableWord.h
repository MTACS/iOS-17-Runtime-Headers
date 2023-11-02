
@interface QSSMutableWord : QSSWord

@property (nonatomic) int frequency;
@property (nonatomic, copy) NSString *orthography;
@property (nonatomic, copy) NSData *pronunciations;
@property (nonatomic, copy) NSString *tag;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)frequency;
- (id)init;
- (id)orthography;
- (id)pronunciations;
- (void)pronunciations:(id /* block */)arg1;
- (void)setFrequency:(int)arg1;
- (void)setOrthography:(id)arg1;
- (void)setPronunciations:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;

@end

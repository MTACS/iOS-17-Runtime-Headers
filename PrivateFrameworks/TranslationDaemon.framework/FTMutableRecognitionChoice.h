
@interface FTMutableRecognitionChoice : FTRecognitionChoice

@property (nonatomic, copy) NSArray *alternative_index;
@property (nonatomic) int confidence;

- (id)alternative_index;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAlternative_index:(id)arg1;
- (void)setConfidence:(int)arg1;

@end


@interface NLv4EmbeddingTensor : NSObject <NSCopying> {
    NSArray * _values;
}

@property (nonatomic, retain) NSArray *values;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setValues:(id)arg1;
- (id)values;

@end

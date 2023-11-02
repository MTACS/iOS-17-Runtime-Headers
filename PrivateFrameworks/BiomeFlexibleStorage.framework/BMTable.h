
@interface BMTable : NSObject {
    NSArray * _rows;
    BMTableSchema * _schema;
}

@property (nonatomic, copy) NSArray *rows;
@property (nonatomic, retain) BMTableSchema *schema;

+ (id)new;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithRows:(id)arg1 schema:(id)arg2;
- (id)rows;
- (id)schema;
- (void)setRows:(id)arg1;
- (void)setSchema:(id)arg1;

@end

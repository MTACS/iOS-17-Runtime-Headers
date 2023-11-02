
@interface BMSQLRow : NSObject <BMRow> {
    NSMutableArray * _allValues;
}

@property (nonatomic, retain) NSMutableArray *allValues;

+ (id)new;

- (void).cxx_destruct;
- (id)allValues;
- (long long)columnCount;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithValues:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAllValues:(id)arg1;
- (id)valueAtIdx:(unsigned long long)arg1;
- (id)values;

@end

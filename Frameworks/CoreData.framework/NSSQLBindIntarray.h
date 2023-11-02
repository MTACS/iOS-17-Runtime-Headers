
@interface NSSQLBindIntarray : NSObject {
    unsigned int  _index;
    NSString * _tableName;
    id  _value;
}

@property (nonatomic) unsigned int index;
@property (nonatomic, retain) NSString *tableName;
@property (nonatomic, retain) id value;

- (void)dealloc;
- (unsigned int)index;
- (id)initWithValue:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setTableName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)tableName;
- (id)value;

@end

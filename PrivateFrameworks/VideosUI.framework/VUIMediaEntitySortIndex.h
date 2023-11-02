
@interface VUIMediaEntitySortIndex : NSObject {
    unsigned long long  _count;
    unsigned long long  _startIndex;
    NSString * _title;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)description;
- (id)init;
- (id)initWithTitle:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (void)setCount:(unsigned long long)arg1;
- (void)setStartIndex:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (unsigned long long)startIndex;
- (id)title;

@end

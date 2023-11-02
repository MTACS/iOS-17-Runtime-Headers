
@interface SSTokenMatch : NSObject {
    NSMutableArray * _indexes;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSMutableArray *indexes;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (bool)exactMatchAtFirstPosition;
- (id)indexes;
- (void)setIndexes:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end

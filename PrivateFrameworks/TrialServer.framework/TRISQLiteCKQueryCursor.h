
@interface TRISQLiteCKQueryCursor : NSObject <NSCopying> {
    unsigned long long  _offset;
    CKQuery * _query;
}

@property (nonatomic) unsigned long long offset;
@property (nonatomic, retain) CKQuery *query;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)offset;
- (id)query;
- (void)setOffset:(unsigned long long)arg1;
- (void)setQuery:(id)arg1;

@end

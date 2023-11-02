
@interface KVSpanMatchResult : NSObject <NSCopying> {
    NSArray * _fieldMatches;
    KVItemInfo * _itemInfo;
    float  _score;
    KVSpanInfo * _spanInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fieldMatches;
- (unsigned long long)hash;
- (id)init;
- (id)initWithItemInfo:(id)arg1 spanInfo:(id)arg2 fieldMatches:(id)arg3;
- (id)initWithItemInfo:(id)arg1 spanInfo:(id)arg2 fieldMatches:(id)arg3 score:(float)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpanMatchResult:(id)arg1;
- (id)itemInfo;
- (float)score;
- (void)setScore:(float)arg1;
- (id)spanInfo;
- (id)spanValue;

@end

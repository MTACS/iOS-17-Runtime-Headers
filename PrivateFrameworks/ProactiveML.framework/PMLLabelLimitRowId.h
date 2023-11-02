
@interface PMLLabelLimitRowId : NSObject <NSCopying> {
    NSString * _label;
    long long  _limit;
    long long  _rowId;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) long long limit;
@property (nonatomic, readonly) long long rowId;

+ (id)labelLimitRowIdWithLabel:(id)arg1 limit:(long long)arg2 rowId:(long long)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLabel:(id)arg1 limit:(long long)arg2 rowId:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLabelLimitRowId:(id)arg1;
- (id)label;
- (long long)limit;
- (long long)rowId;

@end

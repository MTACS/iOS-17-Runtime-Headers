
@interface CTCellIdInfo : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _baseId;
    NSNumber * _cellId;
}

@property (nonatomic, readonly) NSNumber *baseId;
@property (nonatomic, readonly) NSNumber *cellId;

+ (id)cellIdInfoFromCellId:(unsigned long long)arg1 baseId:(int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseId;
- (id)cellId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

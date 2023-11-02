
@interface SPOrphanedRecordsResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _recordsInfo;
}

@property (nonatomic, copy) NSArray *recordsInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordsInfo:(id)arg1;
- (id)recordsInfo;
- (void)setRecordsInfo:(id)arg1;

@end

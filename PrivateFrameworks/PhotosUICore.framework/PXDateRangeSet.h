
@interface PXDateRangeSet : NSObject <NSCopying, NSMutableCopying> {
    NSMutableArray * __dateRanges;
}

@property (nonatomic, retain) NSMutableArray *_dateRanges;
@property (nonatomic, readonly) long long count;

+ (id)dateRangeSet;
+ (id)dateRangeSetWithDateRange:(id)arg1;

- (void).cxx_destruct;
- (id)_dateRanges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)dateRanges;
- (id)description;
- (id)init;
- (id)initWithDateRange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)set_dateRanges:(id)arg1;

@end

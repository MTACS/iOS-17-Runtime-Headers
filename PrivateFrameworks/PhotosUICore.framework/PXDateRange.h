
@interface PXDateRange : NSObject <NSCopying> {
    double  _endDate;
    double  _startDate;
}

@property (readonly) double endDate;
@property (readonly) double startDate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)endDate;
- (unsigned long long)hash;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;
- (bool)intersectsRange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStrictlyBeforeRange:(id)arg1;
- (double)startDate;

@end

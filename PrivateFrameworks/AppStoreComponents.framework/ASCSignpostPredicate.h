
@interface ASCSignpostPredicate : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _dateRanges;
    NSSet * _tags;
}

@property (nonatomic, readonly, copy) NSArray *dateRanges;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly, copy) NSSet *tags;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateRanges;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpans:(id)arg1;
- (id)initWithTags:(id)arg1 dateRanges:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)predicateByAddingDateRange:(id)arg1;
- (id)predicateByAddingTag:(unsigned long long)arg1;
- (id)tags;

@end

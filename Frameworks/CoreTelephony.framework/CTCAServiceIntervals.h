
@interface CTCAServiceIntervals : NSObject <NSCopying, NSSecureCoding> {
    bool  _atStart;
    NSArray * _changesAt;
    NSDate * _endsAt;
    NSDate * _startsAt;
}

@property (nonatomic) bool atStart;
@property (nonatomic, retain) NSArray *changesAt;
@property (nonatomic, retain) NSDate *endsAt;
@property (nonatomic, retain) NSDate *startsAt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)atStart;
- (id)changesAt;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endsAt;
- (id)initWithCoder:(id)arg1;
- (void)setAtStart:(bool)arg1;
- (void)setChangesAt:(id)arg1;
- (void)setEndsAt:(id)arg1;
- (void)setStartsAt:(id)arg1;
- (id)startsAt;

@end

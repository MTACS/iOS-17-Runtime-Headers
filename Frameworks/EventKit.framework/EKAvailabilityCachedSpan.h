
@interface EKAvailabilityCachedSpan : NSObject {
    NSDate * _creationDate;
    EKAvailabilitySpan * _span;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) EKAvailabilitySpan *span;

- (void).cxx_destruct;
- (id)creationDate;
- (id)description;
- (id)initWithSpan:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setSpan:(id)arg1;
- (id)span;

@end

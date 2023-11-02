
@interface ATXStackState : NSObject <NSSecureCoding> {
    NSDate * _dateOfLastStalenessRotation;
    ATXHomeScreenEvent * _lastStackRotationEvent;
    ATXHomeScreenEvent * _lastStackShownEvent;
    ATXHomeScreenEvent * _lastUserScrollStackRotationEvent;
    ATXSuggestionLayout * _layoutForLastStalenessRotation;
    ATXHomeScreenEvent * _stackCreationEvent;
}

@property (nonatomic, retain) NSDate *dateOfLastStalenessRotation;
@property (nonatomic, retain) ATXHomeScreenEvent *lastStackRotationEvent;
@property (nonatomic, retain) ATXHomeScreenEvent *lastStackShownEvent;
@property (nonatomic, retain) ATXHomeScreenEvent *lastUserScrollStackRotationEvent;
@property (nonatomic, retain) ATXSuggestionLayout *layoutForLastStalenessRotation;
@property (nonatomic, retain) ATXHomeScreenEvent *stackCreationEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateOfLastStalenessRotation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastStackRotationEvent;
- (id)lastStackShownEvent;
- (id)lastUserScrollStackRotationEvent;
- (id)layoutForLastStalenessRotation;
- (void)setDateOfLastStalenessRotation:(id)arg1;
- (void)setLastStackRotationEvent:(id)arg1;
- (void)setLastStackShownEvent:(id)arg1;
- (void)setLastUserScrollStackRotationEvent:(id)arg1;
- (void)setLayoutForLastStalenessRotation:(id)arg1;
- (void)setStackCreationEvent:(id)arg1;
- (id)stackCreationEvent;

@end


@interface SetCarDefrosterIntent : INIntent

@property (nonatomic) long long defroster;
@property (nonatomic, retain) NSNumber *enabled;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end

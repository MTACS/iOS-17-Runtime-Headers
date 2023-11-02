
@interface MTPropertyChangeQueryObserver : MTAllPropertyChangesQueryObserver

@property (nonatomic, retain) NSArray *propertyKeys;

+ (Class)fetchedResultsControllerClass;

- (id)_frc;
- (id)propertyKeys;
- (void)setPropertyKeys:(id)arg1;

@end

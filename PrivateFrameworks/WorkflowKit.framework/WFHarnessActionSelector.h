
@interface WFHarnessActionSelector : NSObject {
    NSPredicate * _predicate;
}

@property (nonatomic, readonly) NSPredicate *predicate;

+ (id)matchAll;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)arg1;
- (bool)matchesContext:(id)arg1;
- (id)predicate;

@end


@interface HKInteractiveChartOverlayPredicate : NSObject {
    NSString * _localizedNameKey;
    NSPredicate * _predicate;
}

@property (nonatomic, readonly) NSString *localizedNameKey;
@property (nonatomic, readonly) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)arg1 name:(id)arg2;
- (id)localizedNameKey;
- (id)predicate;

@end

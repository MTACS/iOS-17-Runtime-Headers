
@interface HFCondition : NSObject <NAEquatable> {
    NSPredicate * _predicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (readonly) Class superclass;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)hf_naturalLanguageSummaryWithOptions:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;

@end

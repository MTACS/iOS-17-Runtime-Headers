
@interface _CNContactMatchingFetchRequestInfos : NSObject {
    NSPredicate * _predicate;
    NSArray * _properties;
}

@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) NSArray *properties;

+ (id)fetchRequestInfoForPredicate:(id)arg1 properties:(id)arg2;

- (void).cxx_destruct;
- (id)predicate;
- (id)properties;
- (void)setPredicate:(id)arg1;
- (void)setProperties:(id)arg1;

@end

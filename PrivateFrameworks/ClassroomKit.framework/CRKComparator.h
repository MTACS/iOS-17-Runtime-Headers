
@interface CRKComparator : NSObject {
    NSMutableArray * _allCriteria;
}

@property (nonatomic, readonly) NSMutableArray *allCriteria;

+ (id /* block */)compare;
+ (id)compareWithCriteria:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)allCriteria;
- (id /* block */)compare;
- (id)compareWithCriteria:(id /* block */)arg1;
- (id)init;
- (id /* block */)run;
- (long long)runComparison;

@end

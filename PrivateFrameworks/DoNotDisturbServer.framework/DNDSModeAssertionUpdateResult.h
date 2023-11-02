
@interface DNDSModeAssertionUpdateResult : NSObject <NSCopying> {
    NSArray * _assertions;
    NSArray * _invalidations;
}

@property (nonatomic, readonly, copy) NSArray *assertions;
@property (nonatomic, readonly, copy) NSArray *invalidations;

+ (id)emptyResult;

- (void).cxx_destruct;
- (id)assertions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithAssertions:(id)arg1 invalidations:(id)arg2;
- (id)invalidations;
- (id)resultCombiningWithResult:(id)arg1;

@end

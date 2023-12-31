
@interface GEOAvailableExperiment : NSObject {
    NSMutableArray * _branches;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, readonly) NSArray *branches;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (void)_addBranch:(id)arg1;
- (id)_branchForLabel:(id)arg1;
- (id)branches;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (id)name;

@end

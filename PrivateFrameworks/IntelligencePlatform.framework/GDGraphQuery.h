
@interface GDGraphQuery : NSObject {
    NSString * _objectFTSTerm;
    NSArray * _objects;
    NSArray * _predicates;
    NSArray * _subjects;
}

@property (nonatomic, retain) NSString *objectFTSTerm;
@property (nonatomic, retain) NSArray *objects;
@property (nonatomic, retain) NSArray *predicates;
@property (nonatomic, retain) NSArray *subjects;

- (void).cxx_destruct;
- (id)objectFTSTerm;
- (id)objects;
- (id)predicates;
- (void)setObjectFTSTerm:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)setPredicates:(id)arg1;
- (void)setSubjects:(id)arg1;
- (id)subjects;

@end

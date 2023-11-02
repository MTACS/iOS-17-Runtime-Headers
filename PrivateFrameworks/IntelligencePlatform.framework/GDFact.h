
@interface GDFact : NSObject {
    NSObject<GDFactObject> * _object;
    unsigned long long  _predicate;
}

@property (nonatomic, readonly) NSObject<GDFactObject> *object;
@property (nonatomic, readonly) unsigned long long predicate;

- (void).cxx_destruct;
- (id)initWithPredicate:(unsigned long long)arg1 object:(id)arg2;
- (id)object;
- (unsigned long long)predicate;

@end

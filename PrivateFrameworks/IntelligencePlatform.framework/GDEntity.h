
@interface GDEntity : NSObject <GDEntity> {
    unsigned long long  _entityClass;
    GDEntityIdentifier * _entityIdentifier;
    NSArray * _facts;
}

@property (nonatomic, readonly) unsigned long long entityClass;
@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) NSArray *facts;

- (void).cxx_destruct;
- (unsigned long long)entityClass;
- (id)entityIdentifier;
- (id)facts;
- (id)initWithEntityIdentifier:(id)arg1 facts:(id)arg2 entityClass:(unsigned long long)arg3;

@end

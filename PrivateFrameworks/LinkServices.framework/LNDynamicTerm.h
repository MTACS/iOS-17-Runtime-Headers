
@interface LNDynamicTerm : NSObject <NSCopying> {
    LNEntityIdentifier * _entityIdentifier;
    NSString * _term;
}

@property (nonatomic, readonly) LNEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) NSString *term;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)entityIdentifier;
- (unsigned long long)hash;
- (id)initWithTerm:(id)arg1 entityIdentifier:(id)arg2;
- (id)initWithTerm:(id)arg1 entityIdentifierValue:(id)arg2 entityTypeName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)term;

@end


@interface NSSQLProperty : NSObject {
    NSSQLEntity * _entity;
    unsigned short  _fetchIndex;
    struct _sqlColumnFlags { 
        unsigned int _allowAliasing : 1; 
        unsigned int _unique : 1; 
        unsigned int _constrained : 1; 
        unsigned int _backedByTrigger : 1; 
        unsigned int _isDerivedAttribute : 1; 
        unsigned int _isNestedColumn : 1; 
        unsigned int _reservedFlags : 10; 
    }  _flags;
    NSPropertyDescription * _propertyDescription;
    unsigned char  _propertyType;
    unsigned short  _slot;
    unsigned char  _sqlType;
}

@property (getter=isConstrained, nonatomic) bool constrained;

- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (bool)isConstrained;
- (bool)isEqual:(id)arg1;
- (bool)isToMany;
- (id)name;
- (id)propertyDescription;
- (unsigned char)propertyType;
- (void)setConstrained:(bool)arg1;
- (unsigned int)slot;
- (unsigned char)sqlType;

@end

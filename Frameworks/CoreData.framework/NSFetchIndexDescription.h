
@interface NSFetchIndexDescription : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    NSArray * _elements;
    NSEntityDescription * _entity;
    NSString * _name;
    NSPredicate * _partialIndexPredicate;
}

@property (copy) NSArray *elements;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (copy) NSString *name;
@property (copy) NSPredicate *partialIndexPredicate;

+ (bool)supportsSecureCoding;

- (long long)_compare:(id)arg1;
- (bool)_isEditable;
- (void)_setEntity:(id)arg1;
- (void)_throwIfNotEditable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 elements:(id)arg2;
- (id)initWithName:(id)arg1 predicate:(id)arg2 elements:(id)arg3 entity:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)partialIndexPredicate;
- (void)setElements:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPartialIndexPredicate:(id)arg1;

@end

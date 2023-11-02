
@interface NSSQLEntity_DerivedAttributesExtension : NSObject {
    struct __CFDictionary { } * _derivedAttributes;
    NSSQLEntity * _entity;
    NSMutableDictionary * _migrationSQL;
    NSMutableArray * _triggerSQL;
}

- (void)dealloc;
- (id)entity;
- (id)initWithEntity:(id)arg1;

@end

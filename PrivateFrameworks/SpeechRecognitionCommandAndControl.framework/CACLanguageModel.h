
@interface CACLanguageModel : NSObject <NSCopying> {
    NSMutableDictionary * _attributes;
    NSMutableArray * _children;
    NSString * _identifier;
    NSString * _text;
}

@property (readonly) NSMutableDictionary *attributes;
@property (readonly) NSArray *children;
@property (retain) NSString *identifier;
@property (retain) NSString *text;

- (void).cxx_destruct;
- (id)_initWithLanguageModel:(id)arg1;
- (id)_mutableAttributes;
- (id)_mutableChildren;
- (void)addChildLanguageModel:(id)arg1;
- (id)attributes;
- (id)children;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __RXLanguageObject { }*)createRXLanguageObjectRef;
- (id)description;
- (id)identifier;
- (id)initWithText:(id)arg1 identifier:(id)arg2 attributes:(id)arg3;
- (void)logTreeDescriptionWithLevel:(int)arg1;
- (id)objectForAttribute:(id)arg1;
- (void)removeAllChildren;
- (void)setIdentifier:(id)arg1;
- (void)setObject:(id)arg1 forAttribute:(id)arg2;
- (void)setText:(id)arg1;
- (id)text;

@end


@interface HREIdentifierBuilder : NSObject {
    NSString * _baseIdentifier;
    NSString * _composedString;
    NSMutableDictionary * _keyValues;
}

@property (nonatomic, retain) NSString *baseIdentifier;
@property (nonatomic, readonly) NSString *composedString;
@property (nonatomic, readonly) NSMutableDictionary *keyValues;

- (void).cxx_destruct;
- (id)baseIdentifier;
- (id)composedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBaseIdentifier:(id)arg1;
- (id)keyValues;
- (id)makeComposedString;
- (void)setBaseIdentifier:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

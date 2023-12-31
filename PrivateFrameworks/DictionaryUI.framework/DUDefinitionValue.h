
@interface DUDefinitionValue : NSObject {
    NSAttributedString * _definition;
    NSDictionary * _definitionElements;
    struct __CFArray { } * _foundRecordRefs;
    NSString * _localizedDictionaryName;
    NSString * _longDefinition;
    MAAsset * _rawAsset;
    NSString * _term;
}

@property (readonly) NSAttributedString *definition;
@property (readonly) NSDictionary *definitionElements;
@property struct __CFArray { }*foundRecordRefs;
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *longDefinition;
@property (nonatomic, retain) MAAsset *rawAsset;
@property (readonly) NSString *term;

- (void).cxx_destruct;
- (id)_HTMLDefinitionForType:(long long)arg1;
- (void)dealloc;
- (id)definition;
- (id)definitionElements;
- (id)description;
- (struct __CFArray { }*)foundRecordRefs;
- (id)initWithDefinitionDictionary:(id)arg1 term:(id)arg2;
- (id)localizedDictionaryName;
- (id)longDefinition;
- (id)rawAsset;
- (void)setFoundRecordRefs:(struct __CFArray { }*)arg1;
- (void)setRawAsset:(id)arg1;
- (id)term;

@end

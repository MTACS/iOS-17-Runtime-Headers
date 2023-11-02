
@interface INParameter : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _indexesForSubKeyPaths;
    Class  _parameterClass;
    NSString * _parameterKeyPath;
}

@property (nonatomic, retain) NSMutableDictionary *_indexesForSubKeyPaths;
@property (nonatomic, readonly, copy) NSString *_subscriptedKeyPath;
@property (nonatomic, retain) Class parameterClass;
@property (nonatomic, copy) NSString *parameterKeyPath;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)parameterForClass:(Class)arg1 keyPath:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_indexesForSubKeyPaths;
- (id)_parameterValueForParameterizedObject:(id)arg1;
- (id)_sanitizedKeyPathForKeyPath:(id)arg1 removingSubscripts:(bool)arg2;
- (void)_setIndexesForKeyPathWithSubscripts:(id)arg1;
- (id)_subscriptedKeyPath;
- (id)_valueOfObject:(id)arg1 forRemainingKeyPath:(id)arg2 inFullyQualifiedKeyPath:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexForSubKeyPath:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParameter:(id)arg1;
- (Class)parameterClass;
- (id)parameterKeyPath;
- (id)parameterValue;
- (id)parameterizedObject;
- (void)setIndex:(unsigned long long)arg1 forSubKeyPath:(id)arg2;
- (void)setParameterClass:(Class)arg1;
- (void)setParameterKeyPath:(id)arg1;
- (void)set_indexesForSubKeyPaths:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport

- (bool)isSubParameterOf:(id)arg1;

@end

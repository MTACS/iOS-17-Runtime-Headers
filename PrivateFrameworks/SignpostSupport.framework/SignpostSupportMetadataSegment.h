
@interface SignpostSupportMetadataSegment : NSObject {
    SignpostSupportMessageArgument * _argument;
    bool  _isGenerator;
    NSArray * _placeholderTokens;
    NSString * _stringPrefix;
    NSString * _type;
    NSString * _typeNamespace;
}

@property (nonatomic, readonly) SignpostSupportMessageArgument *argument;
@property (nonatomic, readonly) bool isGenerator;
@property (nonatomic, readonly) NSArray *placeholderTokens;
@property (nonatomic, readonly) NSString *stringPrefix;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *typeNamespace;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithIsHumanReadable:(bool)arg1 shouldRedact:(bool)arg2 didRedactOut:(bool*)arg3;
- (id)argument;
- (bool)hasPlaceholderToken:(id)arg1;
- (id)initWithArgumentObject:(id)arg1 typeNamespace:(id)arg2 type:(id)arg3 tokens:(id)arg4 stringPrefix:(id)arg5;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGenerator;
- (bool)matchesPlaceholderTokenKey:(id)arg1 value:(id)arg2;
- (id)placeholderTokens;
- (id)placeholderTokensForKey:(id)arg1;
- (id)stringPrefix;
- (id)type;
- (id)typeNamespace;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

+ (id)placeholderArrayWithOSLogEventProxy:(id)arg1;

@end

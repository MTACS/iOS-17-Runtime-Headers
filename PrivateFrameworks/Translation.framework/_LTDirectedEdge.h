
@interface _LTDirectedEdge : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _defaultGender;
    NSString * _menuDescription;
    NSNumber * _targetGender;
    unsigned long long  _targetPhraseIndex;
    NSString * _targetPreview;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSNumber *defaultGender;
@property (nonatomic, readonly) NSString *menuDescription;
@property (nonatomic, readonly) NSNumber *targetGender;
@property (nonatomic, readonly) unsigned long long targetPhraseIndex;
@property (nonatomic, readonly) NSString *targetPreview;
@property (nonatomic, readonly) unsigned long long type;

+ (id)genderEdgeWithTargetPhraseIndex:(unsigned long long)arg1 targetPreview:(id)arg2 gender:(unsigned long long)arg3 defaultGender:(unsigned long long)arg4;
+ (id)meaningEdgeWithTargetPhraseIndex:(unsigned long long)arg1 targetPreview:(id)arg2 meaningDescription:(id)arg3 targetGender:(id)arg4 defaultGender:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTargetPhraseIndex:(unsigned long long)arg1 type:(unsigned long long)arg2 targetPreview:(id)arg3 targetGender:(id)arg4 defaultGender:(id)arg5 menuDescription:(id)arg6;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultGender;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)menuDescription;
- (id)targetGender;
- (unsigned long long)targetPhraseIndex;
- (id)targetPreview;
- (unsigned long long)type;

@end

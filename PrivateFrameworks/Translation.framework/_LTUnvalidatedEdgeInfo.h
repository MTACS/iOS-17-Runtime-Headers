
@interface _LTUnvalidatedEdgeInfo : NSObject <NSCopying> {
    NSNumber * _defaultGender;
    NSString * _meaningDescription;
    NSNumber * _targetGender;
    unsigned long long  _targetLinkIndex;
    unsigned long long  _targetPhraseIndex;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSNumber *defaultGender;
@property (nonatomic, readonly, copy) NSString *meaningDescription;
@property (nonatomic, readonly) NSNumber *targetGender;
@property (nonatomic, readonly) unsigned long long targetLinkIndex;
@property (nonatomic, readonly) unsigned long long targetPhraseIndex;
@property (nonatomic, readonly) unsigned long long type;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (id)genderEdgeInfoWithTargetPhraseIndex:(unsigned long long)arg1 targetLinkIndex:(unsigned long long)arg2 gender:(unsigned long long)arg3 defaultGender:(unsigned long long)arg4;
+ (id)meaningEdgeInfoWithTargetPhraseIndex:(unsigned long long)arg1 targetLinkIndex:(unsigned long long)arg2 meaningDescription:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithTargetPhraseIndex:(unsigned long long)arg1 targetLinkIndex:(unsigned long long)arg2 type:(unsigned long long)arg3 meaningDescription:(id)arg4 gender:(id)arg5 defaultGender:(id)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultGender;
- (id)description;
- (id)meaningDescription;
- (id)targetGender;
- (unsigned long long)targetLinkIndex;
- (unsigned long long)targetPhraseIndex;
- (unsigned long long)type;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)unvalidatedEdgeWithEMTAlternative:(id)arg1;
+ (id)unvalidatedEdgeWithFTAlternative:(id)arg1 descriptions:(id)arg2;

@end


@interface TTSSpeechString : NSObject {
    NSString * _originalString;
    TTSSpeechString * _parentString;
    NSMutableArray * _transformations;
    NSString * _transformedString;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *defrostedTransformedString;
@property (nonatomic, readonly) bool finalized;
@property (nonatomic, retain) NSString *originalString;
@property (nonatomic, retain) TTSSpeechString *parentString;
@property (nonatomic, retain) NSMutableArray *transformations;
@property (nonatomic, retain) NSString *transformedString;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (void)_insertTransformation:(id)arg1 forEncapsulatedTerminator:(bool)arg2;
- (bool)_rangeIsValid:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_transformedStringNonMutating;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_translateRangeInTransformedString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withParent:(id)arg2;
- (id)defrostedTransformedString;
- (bool)encapsulateSubstringAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withPrefix:(id)arg2 andSuffix:(id)arg3;
- (bool)finalized;
- (id)initWithOriginalString:(id)arg1;
- (id)initWithParentSpeechString:(id)arg1;
- (id)initWithSSMLString:(id)arg1;
- (bool)insertAtLocation:(unsigned long long)arg1 string:(id)arg2;
- (id)originalString;
- (id)parentString;
- (void)setOriginalString:(id)arg1;
- (void)setParentString:(id)arg1;
- (void)setTransformations:(id)arg1;
- (void)setTransformedString:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (bool)transformRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 to:(id)arg2;
- (id)transformations;
- (id)transformedString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })translateRangeInTransformedString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)type;

@end

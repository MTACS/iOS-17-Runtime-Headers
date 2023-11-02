
@interface SGQuickResponsesClassificationModel : SGQuickResponsesModel

+ (id)featurizerWithMethods:(id)arg1 bucketSize:(unsigned long long)arg2 characterNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 tokenNGramRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 idVectorLength:(unsigned long long)arg5 extraIdOptions:(unsigned long long)arg6 vectorizerStrategy:(unsigned long long)arg7 vectorNormalization:(long long)arg8 vocab:(id)arg9;
+ (id)newTransformerInstanceForConfig:(id)arg1 seed:(unsigned long long)arg2 useSeed:(bool)arg3;
+ (id)newTransformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 vocabPath:(id)arg4;
+ (id)newTransformerInstanceForLanguage:(id)arg1 withDictionary:(id)arg2 withVocab:(id)arg3 withSeed:(unsigned long long)arg4 forMode:(unsigned long long)arg5;

@end

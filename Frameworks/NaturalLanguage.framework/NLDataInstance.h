
@interface NLDataInstance : NSObject

@property (readonly, copy) NSString *label;
@property (readonly, copy) NSArray *labels;
@property (readonly, copy) NSString *string;
@property (readonly, copy) NSArray *tokens;

- (id)formattedLineWithLabelMap:(id)arg1 vocabularyMap:(id)arg2;
- (id)initWithLine:(id)arg1 tokenizer:(struct __CFStringTokenizer { }*)arg2;
- (id)initWithString:(id)arg1 label:(id)arg2;
- (struct __CFDictionary { }*)instanceDictionary;
- (id)label;
- (id)labels;
- (id)locatorsWithIndex:(unsigned long long)arg1 parameters:(struct _NLConstraintParameters { bool x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })arg2 tagger:(id)arg3 tokenizer:(struct __CFStringTokenizer { }*)arg4;
- (id)string;
- (id)subInstanceWithLocator:(id)arg1 tokenizer:(struct __CFStringTokenizer { }*)arg2;
- (id)tokens;

@end

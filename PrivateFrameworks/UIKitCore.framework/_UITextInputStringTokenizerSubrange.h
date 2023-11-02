
@interface _UITextInputStringTokenizerSubrange : NSObject {
    UITextPosition * _basePosition;
    long long  _indexOfBase;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _relevantRange;
    NSString * _substring;
}

@property (nonatomic, readonly) UITextPosition *basePosition;
@property (nonatomic) long long indexOfBase;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } relevantRange;
@property (nonatomic, readonly) NSString *substring;

+ (id)subrangeWithSubstring:(id)arg1 basePosition:(id)arg2;

- (void).cxx_destruct;
- (id)basePosition;
- (id)description;
- (long long)indexOfBase;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })relevantRange;
- (void)setIndexOfBase:(long long)arg1;
- (void)setRelevantRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)substring;

@end

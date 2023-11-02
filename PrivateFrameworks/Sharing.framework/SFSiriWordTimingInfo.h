
@interface SFSiriWordTimingInfo : NSObject {
    NSString * _localizedText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
    double  _timeOffset;
    NSString * _wordID;
}

@property (nonatomic, copy) NSString *localizedText;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;
@property (nonatomic) double timeOffset;
@property (nonatomic, copy) NSString *wordID;

+ (id)serializableArrayWithTimingInfoArray:(id)arg1;
+ (id)timingInfoArrayWithSerializableArray:(id)arg1;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)localizedText;
- (void)setLocalizedText:(id)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setWordID:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;
- (double)timeOffset;
- (id)wordID;

@end
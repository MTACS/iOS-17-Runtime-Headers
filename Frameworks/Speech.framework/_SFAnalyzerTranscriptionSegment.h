
@interface _SFAnalyzerTranscriptionSegment : NSObject {
    NSArray * _alternatives;
    NSArray * _text;
}

@property (nonatomic, readonly, copy) NSArray *alternatives;
@property (nonatomic, readonly, copy) NSArray *text;

- (void).cxx_destruct;
- (id)alternatives;
- (id)initWithText:(id)arg1 alternatives:(id)arg2;
- (id)text;

@end

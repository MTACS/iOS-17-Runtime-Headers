
@interface CDMUserVocab : NSObject {
    NSString * _text;
    unsigned int  _userVocabOptions;
}

@property (nonatomic, readonly) NSArray *labels;
@property (nonatomic, readonly) NSString *text;

+ (id)_labelOptionMap;
+ (id)_optionLabelMap;
+ (id)labelSet;

- (void).cxx_destruct;
- (void)addLabel:(id)arg1;
- (id)initWithText:(id)arg1 label:(id)arg2;
- (id)initWithText:(id)arg1 optionsFlag:(unsigned int)arg2;
- (id)labels;
- (id)text;
- (unsigned int)userVocabOptions;

@end


@interface MPCPlayerAudioFormatSelection : NSObject {
    NSString * _explanation;
    MPCPlayerAudioFormat * _format;
    NSDictionary * _justification;
}

@property (nonatomic, copy) NSString *explanation;
@property (nonatomic, retain) MPCPlayerAudioFormat *format;
@property (nonatomic, copy) NSDictionary *justification;

- (void).cxx_destruct;
- (id)explanation;
- (id)format;
- (id)initWithExplanation:(id)arg1 justification:(id)arg2;
- (id)initWithFormat:(id)arg1 explanation:(id)arg2 justification:(id)arg3;
- (id)justification;
- (void)setExplanation:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setJustification:(id)arg1;

@end

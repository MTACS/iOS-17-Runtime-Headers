
@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent {
    NSArray * _mixedContent;
    MFPlainTextDocument * _plaintextAlternative;
    bool  _textPartsAreHTML;
}

@property (nonatomic, retain) NSArray *mixedContent;
@property (nonatomic, retain) MFPlainTextDocument *plaintextAlternative;
@property (nonatomic) bool textPartsAreHTML;

- (void).cxx_destruct;
- (id)copy;
- (id)mixedContent;
- (id)plaintextAlternative;
- (id)richtextContent;
- (void)setMixedContent:(id)arg1;
- (void)setPlaintextAlternative:(id)arg1;
- (void)setTextPartsAreHTML:(bool)arg1;
- (bool)textPartsAreHTML;

@end

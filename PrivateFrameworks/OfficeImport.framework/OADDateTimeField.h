
@interface OADDateTimeField : OADTextField {
    int  _format;
}

@property (nonatomic) int format;

- (int)format;
- (id)init;
- (bool)isEmpty;
- (bool)isSimilarToTextRun:(id)arg1;
- (void)setFormat:(int)arg1;

@end


@interface WBOfficeArtReaderState : OABReaderState {
    int  mCurrentTextType;
    WBReader * mReader;
    WXReadState * mXmlDocumentState;
}

@property (nonatomic) int currentTextType;
@property (nonatomic) WBReader *reader;

- (void).cxx_destruct;
- (int)currentTextType;
- (id)initWithClient:(Class)arg1;
- (id)reader;
- (void)setCurrentTextType:(int)arg1;
- (void)setReader:(id)arg1;
- (id)xmlDrawingState;

@end

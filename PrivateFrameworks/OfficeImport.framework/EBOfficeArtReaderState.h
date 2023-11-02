
@interface EBOfficeArtReaderState : OABReaderState {
    EBReaderState * mReaderState;
    EXReadState * mXmlDocumentState;
}

@property (readonly) EBReaderState *readerState;

- (void).cxx_destruct;
- (id)initWithReaderState:(id)arg1;
- (id)readerState;
- (id)xmlDrawingState;

@end

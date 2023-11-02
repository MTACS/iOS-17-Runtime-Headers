
@interface PBOfficeArtReaderState : OABReaderState {
    PBPresentationReaderState * mPresentationState;
    PXPresentationState * mXmlDocumentState;
}

@property (readonly) PBPresentationReaderState *presentationState;

- (void).cxx_destruct;
- (id)drawableOnTgtSlideForShapeId:(int)arg1;
- (id)initWithPresentationState:(id)arg1;
- (id)presentationState;
- (id)xmlDocumentState;
- (id)xmlDrawingState;

@end


@interface EXOfficeArtState : OAXDrawingState {
    EXReadState * mExcelState;
}

@property (readonly) EXReadState *excelState;

- (void).cxx_destruct;
- (id)excelState;
- (id)initWithExcelState:(id)arg1;

@end

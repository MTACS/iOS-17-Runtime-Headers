
@interface ODXState : OCXReadState {
    CXNamespace * mODXDiagramNamespace;
    OAXDrawingState * mOfficeArtState;
}

@property (nonatomic, retain) CXNamespace *ODXDiagramNamespace;

- (void).cxx_destruct;
- (id)ODXDiagramNamespace;
- (id)initWithOfficeArtState:(id)arg1;
- (id)officeArtState;
- (void)setODXDiagramNamespace:(id)arg1;
- (void)setupNSForXMLFormat:(int)arg1;

@end

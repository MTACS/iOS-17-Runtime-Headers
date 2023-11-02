
@interface PXVmlState : OAVReadState {
    PBPresentationReaderState * mLegacyPresentationState;
    ESDObject * mLegacyTextGlobals;
}

- (void).cxx_destruct;
- (id)legacyPresentationState;
- (id)legacyTextGlobals;
- (void)setLegacyPresentationState:(id)arg1;
- (void)setLegacyTextGlobals:(id)arg1;

@end

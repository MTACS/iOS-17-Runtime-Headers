
@interface CNPREditorColorPalette : NSObject {
    PREditorColorPalette * _wrappedEditorColorPalette;
}

+ (id)standardPalette;

- (void).cxx_destruct;
- (id)colors;
- (id)initWithEditorColorPalette:(id)arg1;

@end

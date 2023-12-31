
@interface MFPalette : NSObject <MFObject> {
    NSMutableArray * m_colours;
}

+ (id)paletteWithColours:(id)arg1;

- (void).cxx_destruct;
- (id)getColour:(int)arg1;
- (id)init;
- (id)initWithColours:(id)arg1;
- (bool)resize:(int)arg1;
- (int)selectInto:(id)arg1;
- (bool)setEntries:(int)arg1 in_colours:(id)arg2;

@end

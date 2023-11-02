
@interface CHDMarker : NSObject {
    OADGraphicProperties * mGraphicProperties;
    unsigned int  mSize;
    int  mStyle;
}

- (void).cxx_destruct;
- (id)description;
- (id)graphicProperties;
- (id)init;
- (void)setGraphicProperties:(id)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setStyle:(int)arg1;
- (unsigned int)size;
- (int)style;

@end

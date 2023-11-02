
@interface OADTableStyle : NSObject {
    OADTableBackground * mBackground;
    OADTablePartStyle * mBand1HorzStyle;
    OADTablePartStyle * mBand1VertStyle;
    OADTablePartStyle * mBand2HorzStyle;
    OADTablePartStyle * mBand2VertStyle;
    OADTablePartStyle * mFirstColumnStyle;
    OADTablePartStyle * mFirstRowStyle;
    NSString * mId;
    OADTablePartStyle * mLastColumnStyle;
    OADTablePartStyle * mLastRowStyle;
    NSString * mName;
    OADTablePartStyle * mNorthEastStyle;
    OADTablePartStyle * mNorthWestStyle;
    OADTablePartStyle * mSouthEastStyle;
    OADTablePartStyle * mSouthWestStyle;
    OADTablePartStyle * mWholeTableStyle;
}

- (void).cxx_destruct;
- (id)background;
- (id)band1HorzStyle;
- (id)band1VertStyle;
- (id)band2HorzStyle;
- (id)band2VertStyle;
- (id)description;
- (id)firstColumnStyle;
- (id)firstRowStyle;
- (id)id;
- (id)lastColumnStyle;
- (id)lastRowStyle;
- (id)name;
- (id)northEastStyle;
- (id)northWestStyle;
- (id)partStyle:(int)arg1;
- (void)setBackground:(id)arg1;
- (void)setBand1HorzStyle:(id)arg1;
- (void)setBand1VertStyle:(id)arg1;
- (void)setBand2HorzStyle:(id)arg1;
- (void)setBand2VertStyle:(id)arg1;
- (void)setFirstColumnStyle:(id)arg1;
- (void)setFirstRowStyle:(id)arg1;
- (void)setId:(id)arg1;
- (void)setLastColumnStyle:(id)arg1;
- (void)setLastRowStyle:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNorthEastStyle:(id)arg1;
- (void)setNorthWestStyle:(id)arg1;
- (void)setSouthEastStyle:(id)arg1;
- (void)setSouthWestStyle:(id)arg1;
- (void)setStyle:(id)arg1 forPart:(int)arg2;
- (void)setWholeTableStyle:(id)arg1;
- (id)southEastStyle;
- (id)southWestStyle;
- (id)wholeTableStyle;

@end

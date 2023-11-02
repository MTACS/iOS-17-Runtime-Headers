
@interface PREditingSessionModifications : NSObject <NSCopying> {
    bool  _colorModified;
    bool  _containedWidgetsBeforeEdit;
    bool  _fontModified;
    bool  _numberingSystemModified;
    bool  _posterContentModified;
    NSDate * _startDate;
    bool  _widgetsModified;
}

@property (nonatomic) bool colorModified;
@property (nonatomic) bool containedWidgetsBeforeEdit;
@property (nonatomic) bool fontModified;
@property (nonatomic) bool numberingSystemModified;
@property (nonatomic) bool posterContentModified;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) bool widgetsModified;

- (void).cxx_destruct;
- (bool)colorModified;
- (bool)containedWidgetsBeforeEdit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)fontModified;
- (bool)numberingSystemModified;
- (bool)posterContentModified;
- (void)setColorModified:(bool)arg1;
- (void)setContainedWidgetsBeforeEdit:(bool)arg1;
- (void)setFontModified:(bool)arg1;
- (void)setNumberingSystemModified:(bool)arg1;
- (void)setPosterContentModified:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setWidgetsModified:(bool)arg1;
- (id)startDate;
- (bool)widgetsModified;

@end

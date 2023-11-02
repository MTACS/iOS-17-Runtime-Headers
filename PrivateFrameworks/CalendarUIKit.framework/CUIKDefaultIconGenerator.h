
@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator> {
    NSCalendar * _calendar;
    double  _canvasScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    NSDateComponents * _dateComponents;
    long long  _iconFormat;
}

@property (nonatomic, readonly, copy) NSCalendar *calendar;
@property (nonatomic, readonly) double canvasScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, readonly, copy) NSDateComponents *dateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long iconFormat;
@property (readonly) Class superclass;

+ (id)_countriesRequiringBlackDayOfWeek;
+ (id)_dateNameFromDateComponents:(id)arg1 calendar:(id)arg2 type:(long long)arg3 forceAbbreviated:(bool)arg4;
+ (id)_dayNumberStringFromDateComponents:(id)arg1 calendar:(id)arg2;
+ (bool)_isBlackDayOfWeekRequiredForLocale:(id)arg1;
+ (id)_whiteImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

- (void).cxx_destruct;
- (id)_colorForDayOfWeek;
- (id)_dateNameFont;
- (id)_dayNumberFont;
- (void)_drawDateName;
- (void)_drawDayNumber;
- (void)_drawIconInContext:(struct CGContext { }*)arg1 iconBase:(id)arg2;
- (id)_iconBlackColor;
- (id)_iconRedColor;
- (double)_roundSpecToActual:(double)arg1;
- (id)calendar;
- (double)canvasScale;
- (struct CGSize { double x1; double x2; })canvasSize;
- (id)dateComponents;
- (long long)iconFormat;
- (struct CGImage { }*)iconImageWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 size:(struct CGSize { double x1; double x2; })arg4 scale:(double)arg5;
- (id)initWithForceNoTextEffects:(bool)arg1;

@end

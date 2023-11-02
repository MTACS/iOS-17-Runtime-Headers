
@interface ATXTimeEventPresentation : NSObject <NSSecureCoding> {
    bool  _allowsRescheduling;
    NSData * _backgroundImageData;
    NSArray * _fields;
    bool  _hasCheckbox;
    NSArray * _icons;
    NSData * _logoImageData;
    bool  _overlapIcons;
    ATXPinnedTimeEvent * _pinnedTimeEvent;
    NSString * _subtitleGlyph;
    bool  _supportsRouteMap;
    ATXTimeScheduledWidget * _widget;
}

@property (nonatomic, readonly) bool allowsRescheduling;
@property (nonatomic, readonly) NSData *backgroundImageData;
@property (nonatomic, readonly, copy) NSArray *fields;
@property (nonatomic, readonly) bool hasCheckbox;
@property (nonatomic, readonly) NSArray *icons;
@property (nonatomic, readonly) NSData *logoImageData;
@property (nonatomic, readonly) bool overlapIcons;
@property (nonatomic, readonly) ATXPinnedTimeEvent *pinnedTimeEvent;
@property (nonatomic, readonly, copy) NSString *subtitleGlyph;
@property (nonatomic, readonly) bool supportsRouteMap;
@property (nonatomic, readonly) ATXTimeScheduledWidget *widget;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsRescheduling;
- (id)backgroundImageData;
- (void)encodeWithCoder:(id)arg1;
- (id)fields;
- (bool)hasCheckbox;
- (id)icons;
- (id)initWithCardIcon:(id)arg1 fields:(id)arg2 backgroundImageData:(id)arg3 logoImageData:(id)arg4 subtitleGlyph:(id)arg5 allowsRescheduling:(bool)arg6;
- (id)initWithCardIcons:(id)arg1 shouldOverlapIcons:(bool)arg2 subtitleGlyph:(id)arg3 hasCheckbox:(bool)arg4 allowsRescheduling:(bool)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithPinnedTimeEvent:(id)arg1 subtitleGlyph:(id)arg2 allowsRescheduling:(bool)arg3;
- (id)initWithRouteMapIcons:(id)arg1 subtitleGlyph:(id)arg2 allowsRescheduling:(bool)arg3;
- (id)initWithWidget:(id)arg1 allowsRescheduling:(bool)arg2;
- (id)logoImageData;
- (bool)overlapIcons;
- (id)pinnedTimeEvent;
- (id)subtitleGlyph;
- (bool)supportsRouteMap;
- (id)widget;

@end

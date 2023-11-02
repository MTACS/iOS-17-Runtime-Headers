
@interface CUIKUserActivityRemindersListSharedInvitation : CUIKUserActivityWithSource {
    NSString * _title;
}

@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (bool)_isMatchForSource:(id)arg1 andTitle:(id)arg2;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(id)arg1 title:(id)arg2;
- (id)title;

@end

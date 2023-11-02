
@interface HFAnalyticsSceneIconEditEvent : HFAnalyticsEvent {
    NSString * _colorStr;
    NSNumber * _didChange;
    NSNumber * _isNewScene;
    NSString * _sfSymbolStr;
}

@property (nonatomic, retain) NSString *colorStr;
@property (nonatomic, retain) NSNumber *didChange;
@property (nonatomic, retain) NSNumber *isNewScene;
@property (nonatomic, retain) NSString *sfSymbolStr;

- (void).cxx_destruct;
- (id)colorStr;
- (id)didChange;
- (id)initWithData:(id)arg1;
- (id)isNewScene;
- (id)payload;
- (void)setColorStr:(id)arg1;
- (void)setDidChange:(id)arg1;
- (void)setIsNewScene:(id)arg1;
- (void)setSfSymbolStr:(id)arg1;
- (id)sfSymbolStr;

@end

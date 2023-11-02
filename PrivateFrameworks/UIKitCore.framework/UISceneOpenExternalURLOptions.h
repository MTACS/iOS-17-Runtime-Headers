
@interface UISceneOpenExternalURLOptions : NSObject {
    UIEventAttribution * _eventAttribution;
    bool  _universalLinksOnly;
}

@property (nonatomic, copy) UIEventAttribution *eventAttribution;
@property (nonatomic) bool universalLinksOnly;

- (void).cxx_destruct;
- (id)eventAttribution;
- (void)setEventAttribution:(id)arg1;
- (void)setUniversalLinksOnly:(bool)arg1;
- (bool)universalLinksOnly;

@end

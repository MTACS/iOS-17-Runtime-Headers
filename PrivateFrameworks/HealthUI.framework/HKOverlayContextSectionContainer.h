
@interface HKOverlayContextSectionContainer : NSObject {
    NSString * _localizedContainerTitle;
    NSArray * _overlayContextSections;
    HKDisplayType * _primaryDisplayType;
}

@property (nonatomic, readonly) NSString *localizedContainerTitle;
@property (nonatomic, readonly) NSArray *overlayContextSections;
@property (nonatomic, readonly) HKDisplayType *primaryDisplayType;

- (void).cxx_destruct;
- (id)initWithContainerTitle:(id)arg1 overlayContextSections:(id)arg2;
- (id)initWithContainerTitle:(id)arg1 overlayContextSections:(id)arg2 primaryDisplayType:(id)arg3;
- (id)localizedContainerTitle;
- (id)overlayContextSections;
- (id)primaryDisplayType;

@end

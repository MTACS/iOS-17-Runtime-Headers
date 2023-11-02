
@interface HKOverlayContextSection : NSObject <HKDisplayTypeContextItemSection> {
    UIAction * _accessoryButtonAction;
    NSString * _localizedSectionTitle;
    NSArray * _overlayContextItems;
    NSArray * items;
    NSString * title;
}

@property (nonatomic, readonly) UIAction *accessoryButtonAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, readonly) NSString *localizedSectionTitle;
@property (nonatomic, readonly) NSArray *overlayContextItems;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)accessoryButtonAction;
- (id)initWithSectionTitle:(id)arg1 overlayContextItems:(id)arg2;
- (id)initWithSectionTitle:(id)arg1 overlayContextItems:(id)arg2 accessoryButtonAction:(id)arg3;
- (id)items;
- (id)localizedSectionTitle;
- (id)overlayContextItems;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

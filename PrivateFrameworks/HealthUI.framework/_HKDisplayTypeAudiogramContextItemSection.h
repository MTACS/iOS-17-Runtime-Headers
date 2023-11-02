
@interface _HKDisplayTypeAudiogramContextItemSection : NSObject <HKDisplayTypeContextItemSection> {
    NSArray * _items;
    NSString * _title;
}

@property (nonatomic, retain) UIAction *accessoryButtonAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)items;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end


@interface AVTCoreModelPresetsPicker : NSObject <AVTCoreModelPicker> {
    NSString * _identifier;
    AVTCoreModelPickerOptions * _options;
    AVTCoreModelPairing * _pairing;
    NSOrderedSet * _representedTags;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) AVTCoreModelPickerOptions *options;
@property (nonatomic, readonly, copy) AVTCoreModelPairing *pairing;
@property (nonatomic, readonly, copy) NSOrderedSet *representedTags;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithTitle:(id)arg1 representedTags:(id)arg2 pairing:(id)arg3 options:(id)arg4;
- (id)initWithTitle:(id)arg1 representedTags:(id)arg2 pairing:(id)arg3 options:(id)arg4 identifier:(id)arg5;
- (id)options;
- (id)pairing;
- (id)representedTags;
- (id)title;

@end

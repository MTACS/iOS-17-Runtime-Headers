
@interface NTKComplicationPickerDetailViewConfiguration : NTKComplicationPickerBaseViewConfiguration {
    NSString * _title;
}

@property (nonatomic, readonly) NTKFaceSlotComplicationDetailListProvider *listProvider;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)initWithDetailListProvider:(id)arg1 title:(id)arg2;
- (id)title;

@end

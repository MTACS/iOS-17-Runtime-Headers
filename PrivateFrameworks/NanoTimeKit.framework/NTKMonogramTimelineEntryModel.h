
@interface NTKMonogramTimelineEntryModel : NTKTimelineEntryModel {
    NSString * _monogram;
}

@property (nonatomic, copy) NSString *monogram;

- (void).cxx_destruct;
- (id)_newSimpleTextTemplate;
- (id)monogram;
- (void)setMonogram:(id)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end

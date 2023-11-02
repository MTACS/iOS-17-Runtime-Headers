
@interface NTKBuildNumberComplicationEntryModel : NTKTimelineEntryModel {
    NSString * buildNum;
    NSString * prefixString;
}

+ (id)modelWithBuildNum:(id)arg1;

- (void).cxx_destruct;
- (id)entryForComplicationFamily:(long long)arg1;

@end

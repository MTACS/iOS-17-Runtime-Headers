
@interface NTKTimelineEntryModel : NSObject {
    NSDate * _entryDate;
}

@property (nonatomic, retain) NSDate *entryDate;

- (void).cxx_destruct;
- (id)entryDate;
- (id)entryForComplicationFamily:(long long)arg1;
- (void)setEntryDate:(id)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end

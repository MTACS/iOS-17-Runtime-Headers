
@interface SearchUITrackRowModel : SearchUICardSectionRowModel {
    SFTrack * _track;
    SearchUITrackLayoutManager * _trackLayoutManager;
}

@property (nonatomic, retain) SFTrack *track;
@property (nonatomic, retain) SearchUITrackLayoutManager *trackLayoutManager;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithResult:(id)arg1 trackManager:(id)arg2 cardSection:(id)arg3 track:(id)arg4 queryId:(unsigned long long)arg5 itemIdentifier:(id)arg6;
- (void)setTrack:(id)arg1;
- (void)setTrackLayoutManager:(id)arg1;
- (id)track;
- (id)trackLayoutManager;

@end

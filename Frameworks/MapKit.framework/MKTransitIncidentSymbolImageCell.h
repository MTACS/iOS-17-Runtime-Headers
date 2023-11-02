
@interface MKTransitIncidentSymbolImageCell : MKCustomSeparatorCell <MKTransitItemIncidentView> {
    MKTransitIncidentItemCellBackgroundView * _backgroundView;
    long long  _cellPosition;
    bool  _padBottom;
    MKTransitIncidentViewModel * _viewModel;
}

@property (nonatomic) long long cellPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool padBottom;
@property (readonly) Class superclass;
@property (nonatomic, retain) MKTransitIncidentViewModel *viewModel;

- (void).cxx_destruct;
- (void)_configureWithMessage:(id)arg1 referenceDate:(id)arg2 lastUpdated:(id)arg3 incidentIsBlocking:(bool)arg4 shouldShowImage:(bool)arg5 inSiri:(bool)arg6;
- (void)_updateAppearance;
- (long long)cellPosition;
- (void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(bool)arg3 inSiri:(bool)arg4;
- (void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(bool)arg3 inSiri:(bool)arg4;
- (void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(bool)arg4 inSiri:(bool)arg5;
- (bool)padBottom;
- (void)setCellPosition:(long long)arg1;
- (void)setPadBottom:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end

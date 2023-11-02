
@interface MKTransitItemIncidentCell : MKCustomSeparatorCell <MKTransitItemIncidentView> {
    MKTransitItemIncidentView * _incidentView;
}

@property (nonatomic) long long cellPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool padBottom;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureViews;
- (void)_updateIncidentViewBottomOffset;
- (long long)cellPosition;
- (void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(bool)arg3 inSiri:(bool)arg4;
- (void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(bool)arg3 inSiri:(bool)arg4;
- (void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(bool)arg4 inSiri:(bool)arg5;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)padBottom;
- (void)setCellPosition:(long long)arg1;
- (void)setLeadingSeparatorInset:(double)arg1;
- (void)setPadBottom:(bool)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setTrailingSeparatorInset:(double)arg1;

@end

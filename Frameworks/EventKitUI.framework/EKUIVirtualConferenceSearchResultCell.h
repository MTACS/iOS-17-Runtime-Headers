
@interface EKUIVirtualConferenceSearchResultCell : EKUILocationSearchResultCell {
    EKVirtualConference * _currentCustomVirtualConference;
    EKVirtualConferenceRoomType * _currentRoomType;
}

+ (id)_boldTitleFont;

- (void).cxx_destruct;
- (void)updateWithCustomVirtualConference:(id)arg1;
- (void)updateWithRoomType:(id)arg1;

@end

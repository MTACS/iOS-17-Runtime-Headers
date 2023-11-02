
@protocol HFCameraClipEvents

@required

- (NSArray *)hf_allEventsContainingPeopleInClip;
- (NSArray *)hf_sortedSignificantEvents;

@end

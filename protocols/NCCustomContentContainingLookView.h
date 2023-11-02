
@protocol NCCustomContentContainingLookView <PLPlatter, PLTitled, PLExpandedPlatter>

@required

- (unsigned long long)customContentLocation;
- (bool)hidesNotificationContent;
- (UITapGestureRecognizer *)lookViewTapGestureRecognizer;
- (void)setCustomContentLocation:(unsigned long long)arg1;
- (void)setHidesNotificationContent:(bool)arg1;

@end

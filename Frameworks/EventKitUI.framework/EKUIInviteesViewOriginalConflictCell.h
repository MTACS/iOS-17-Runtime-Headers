
@interface EKUIInviteesViewOriginalConflictCell : EKUIInviteesViewTimeSlotCell {
    bool  _conflict;
}

@property bool conflict;

- (bool)conflict;
- (id)participantsTextColor;
- (void)setConflict:(bool)arg1;
- (id)timeTextColor;

@end

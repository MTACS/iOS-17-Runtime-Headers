
@interface EKUIInviteesViewProposedTimeCell : EKUIInviteesViewTimeSlotCell {
    bool  _conflicts;
}

@property bool conflicts;

- (bool)conflicts;
- (id)participantsTextColor;
- (void)setConflicts:(bool)arg1;

@end

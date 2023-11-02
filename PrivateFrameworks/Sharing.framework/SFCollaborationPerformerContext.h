
@interface SFCollaborationPerformerContext : NSObject {
    double  _deviceScreenScale;
    bool  _requiresParticipants;
}

@property (nonatomic) double deviceScreenScale;
@property (nonatomic) bool requiresParticipants;

- (double)deviceScreenScale;
- (bool)requiresParticipants;
- (void)setDeviceScreenScale:(double)arg1;
- (void)setRequiresParticipants:(bool)arg1;

@end

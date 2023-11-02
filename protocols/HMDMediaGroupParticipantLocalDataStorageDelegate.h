
@protocol HMDMediaGroupParticipantLocalDataStorageDelegate

@required

- (void)mediaGroupParticipantLocalDataStorage:(HMDMediaGroupParticipantLocalDataStorage *)arg1 didChangeDestinationIdentifier:(NSUUID *)arg2 forDestinationControllerIdentifier:(NSUUID *)arg3;

@end

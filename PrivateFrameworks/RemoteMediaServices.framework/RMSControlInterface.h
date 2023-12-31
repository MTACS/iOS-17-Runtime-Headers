
@interface RMSControlInterface : NSObject {
    bool  _supportsDirectionalControl;
    bool  _supportsSpeakerSelection;
    bool  _supportsVolumeControl;
}

@property (nonatomic) bool supportsDirectionalControl;
@property (nonatomic) bool supportsSpeakerSelection;
@property (nonatomic) bool supportsVolumeControl;

- (id)initWithProtobuf:(id)arg1;
- (id)protobuf;
- (void)setSupportsDirectionalControl:(bool)arg1;
- (void)setSupportsSpeakerSelection:(bool)arg1;
- (void)setSupportsVolumeControl:(bool)arg1;
- (bool)supportsDirectionalControl;
- (bool)supportsSpeakerSelection;
- (bool)supportsVolumeControl;

@end

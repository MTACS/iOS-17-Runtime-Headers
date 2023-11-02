
@interface AVExtendedNoteOnEvent : AVMusicEvent {
    struct ExtendedNoteOnEvent { unsigned int x1; unsigned int x2; float x3; struct MusicDeviceNoteParams { unsigned int x_4_1_1; float x_4_1_2; float x_4_1_3; struct NoteParamsControlValue { unsigned int x_4_2_1; float x_4_2_2; } x_4_1_4[1]; } x4; } * _event;
}

@property double duration;
@property (readonly) struct ExtendedNoteOnEvent { unsigned int x1; unsigned int x2; float x3; struct MusicDeviceNoteParams { unsigned int x_4_1_1; float x_4_1_2; float x_4_1_3; struct NoteParamsControlValue { unsigned int x_4_2_1; float x_4_2_2; } x_4_1_4[1]; } x4; }*event;
@property unsigned int groupID;
@property unsigned int instrumentID;
@property float midiNote;
@property float velocity;

- (void)dealloc;
- (double)duration;
- (struct ExtendedNoteOnEvent { unsigned int x1; unsigned int x2; float x3; struct MusicDeviceNoteParams { unsigned int x_4_1_1; float x_4_1_2; float x_4_1_3; struct NoteParamsControlValue { unsigned int x_4_2_1; float x_4_2_2; } x_4_1_4[1]; } x4; }*)event;
- (unsigned int)groupID;
- (id)initWithMIDINote:(float)arg1 velocity:(float)arg2 groupID:(unsigned int)arg3 duration:(double)arg4;
- (id)initWithMIDINote:(float)arg1 velocity:(float)arg2 instrumentID:(unsigned int)arg3 groupID:(unsigned int)arg4 duration:(double)arg5;
- (id)initWithNoteOnEvent:(struct ExtendedNoteOnEvent { unsigned int x1; unsigned int x2; float x3; struct MusicDeviceNoteParams { unsigned int x_4_1_1; float x_4_1_2; float x_4_1_3; struct NoteParamsControlValue { unsigned int x_4_2_1; float x_4_2_2; } x_4_1_4[1]; } x4; }*)arg1;
- (unsigned int)instrumentID;
- (float)midiNote;
- (void)setDuration:(double)arg1;
- (void)setGroupID:(unsigned int)arg1;
- (void)setInstrumentID:(unsigned int)arg1;
- (void)setMidiNote:(float)arg1;
- (void)setVelocity:(float)arg1;
- (float)velocity;

@end

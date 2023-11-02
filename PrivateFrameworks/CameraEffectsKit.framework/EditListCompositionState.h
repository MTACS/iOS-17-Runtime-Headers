
@interface EditListCompositionState : NSObject {
    JFXCompositionTrackGroup * _alternateTrackGroup;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _audioCompTimeRange;
    int  _audioEndOffset;
    int  _audioStartOffset;
    <JFXPlayableElement> * _clip;
    bool  _clipRequiresCA;
    JFXCompositionTrackGroup * _currentTrackGroup;
    bool  _isLastClip;
    int  _overlapLeft;
    int  _overlapRight;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _videoCompTimeRange;
}

@property (nonatomic, retain) JFXCompositionTrackGroup *alternateTrackGroup;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } audioCompTimeRange;
@property (nonatomic) int audioEndOffset;
@property (nonatomic) int audioStartOffset;
@property (nonatomic) <JFXPlayableElement> *clip;
@property (nonatomic) bool clipRequiresCA;
@property (nonatomic, retain) JFXCompositionTrackGroup *currentTrackGroup;
@property (nonatomic) bool isLastClip;
@property (nonatomic) int overlapLeft;
@property (nonatomic) int overlapRight;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } videoCompTimeRange;

- (void).cxx_destruct;
- (id)alternateTrackGroup;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })audioCompTimeRange;
- (int)audioEndOffset;
- (int)audioStartOffset;
- (id)clip;
- (bool)clipRequiresCA;
- (id)currentTrackGroup;
- (id)description;
- (bool)isLastClip;
- (int)overlapLeft;
- (int)overlapRight;
- (void)setAlternateTrackGroup:(id)arg1;
- (void)setAudioCompTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setAudioEndOffset:(int)arg1;
- (void)setAudioStartOffset:(int)arg1;
- (void)setClip:(id)arg1;
- (void)setClipRequiresCA:(bool)arg1;
- (void)setCurrentTrackGroup:(id)arg1;
- (void)setIsLastClip:(bool)arg1;
- (void)setOverlapLeft:(int)arg1;
- (void)setOverlapRight:(int)arg1;
- (void)setVideoCompTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)swapTrackGroup;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })videoCompTimeRange;

@end

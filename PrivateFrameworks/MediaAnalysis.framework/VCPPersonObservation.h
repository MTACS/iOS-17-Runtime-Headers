
@interface VCPPersonObservation : NSObject {
    float  _absoluteActionScore;
    NSArray * _keypoints;
    int  _personID;
    float  _relativeActionScore;
    int  _revision;
}

@property (nonatomic) float absoluteActionScore;
@property (nonatomic, retain) NSArray *keypoints;
@property (nonatomic) int personID;
@property (nonatomic) float relativeActionScore;
@property (nonatomic) int revision;

- (void).cxx_destruct;
- (float)absoluteActionScore;
- (id)keypoints;
- (int)personID;
- (float)relativeActionScore;
- (int)revision;
- (void)setAbsoluteActionScore:(float)arg1;
- (void)setKeypoints:(id)arg1;
- (void)setPersonID:(int)arg1;
- (void)setRelativeActionScore:(float)arg1;
- (void)setRevision:(int)arg1;

@end

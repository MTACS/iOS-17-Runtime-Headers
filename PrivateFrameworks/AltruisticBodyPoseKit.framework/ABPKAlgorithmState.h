
@interface ABPKAlgorithmState : NSObject {
    bool  _detection2d;
    bool  _image_preprocessing;
    bool  _lifting3d;
    bool  _registration;
    bool  _retargeting;
}

@property bool detection2d;
@property bool image_preprocessing;
@property bool lifting3d;
@property bool registration;
@property bool retargeting;

- (bool)detection2d;
- (bool)image_preprocessing;
- (id)init;
- (bool)lifting3d;
- (bool)registration;
- (bool)retargeting;
- (void)setDetection2d:(bool)arg1;
- (void)setImage_preprocessing:(bool)arg1;
- (void)setLifting3d:(bool)arg1;
- (void)setRegistration:(bool)arg1;
- (void)setRetargeting:(bool)arg1;
- (id)toDict;

@end

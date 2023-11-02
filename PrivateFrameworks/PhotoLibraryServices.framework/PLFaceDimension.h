
@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation> {
    double  _bodyCenterX;
    double  _bodyCenterY;
    double  _bodyHeight;
    double  _bodyWidth;
    double  _centerX;
    double  _centerY;
    double  _size;
    long long  _sourceHeight;
    long long  _sourceWidth;
}

- (id)description;
- (id)initWithSourceWidth:(long long)arg1 sourceHeight:(long long)arg2 bodyCenterX:(double)arg3 bodyCenterY:(double)arg4 bodyWidth:(double)arg5 bodyHeight:(double)arg6;
- (id)initWithSourceWidth:(long long)arg1 sourceHeight:(long long)arg2 centerX:(double)arg3 centerY:(double)arg4 size:(double)arg5;
- (id)initWithSourceWidth:(long long)arg1 sourceHeight:(long long)arg2 centerX:(double)arg3 centerY:(double)arg4 size:(double)arg5 bodyCenterX:(double)arg6 bodyCenterY:(double)arg7 bodyWidth:(double)arg8 bodyHeight:(double)arg9;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationBodyCenterX;
- (double)photosFaceRepresentationBodyCenterY;
- (double)photosFaceRepresentationBodyHeight;
- (double)photosFaceRepresentationBodyWidth;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (bool)photosFaceRepresentationHasSmile;
- (bool)photosFaceRepresentationIsLeftEyeClosed;
- (bool)photosFaceRepresentationIsRightEyeClosed;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationQuality;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;

@end


@interface CLSFaceInformation : NSObject {
    unsigned int  _faceIsGood;
    unsigned int  _faceIsOk;
    double  _faceQuality;
    double  _faceSize;
    unsigned int  _faceSizeIsGood;
    bool  _isHiddenPerson;
    bool  _isKnownPerson;
    NSArray * _traits;
}

@property (readonly) bool faceIsGood;
@property (readonly) bool faceIsOk;
@property (readonly) double faceQuality;
@property (readonly) double faceSize;
@property (readonly) bool faceSizeIsGood;
@property (readonly) bool isHiddenPerson;
@property (readonly) bool isKnownPerson;
@property (readonly) NSArray *traits;

+ (id)_traitsFromTraitsPropertyListRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithFaceSize:(double)arg1 faceQuality:(double)arg2 isKnownPerson:(bool)arg3 isHiddenPerson:(bool)arg4 faceSizeIsGood:(bool)arg5 faceIsGood:(bool)arg6 faceIsOk:(bool)arg7 traits:(id)arg8;
- (id)_propertyListRepresentationOfTraits;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)faceIsGood;
- (bool)faceIsOk;
- (double)faceQuality;
- (double)faceSize;
- (bool)faceSizeIsGood;
- (id)initForHiddenPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(bool)arg3 faceIsGood:(bool)arg4 faceIsOk:(bool)arg5 traits:(id)arg6;
- (id)initForKnownPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(bool)arg3 faceIsGood:(bool)arg4 faceIsOk:(bool)arg5 traits:(id)arg6;
- (id)initForUnknownPersonWithFaceSize:(double)arg1 faceQuality:(double)arg2 faceSizeIsGood:(bool)arg3 faceIsGood:(bool)arg4 faceIsOk:(bool)arg5 traits:(id)arg6;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isHiddenPerson;
- (bool)isKnownPerson;
- (id)traits;

@end

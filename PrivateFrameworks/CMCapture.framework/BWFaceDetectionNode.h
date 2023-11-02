
@interface BWFaceDetectionNode : BWFanOutNode {
    bool  _boxedMetadataOutputEnabled;
    NSArray * _boxedMetadataOutputs;
    unsigned int  _collectionItemsAtomIdentifier_BE;
    NSDictionary * _detectionTimingInfoByBoxedOutput;
    struct OpaqueCMBlockBuffer { } * _emptyMetadataSampleData;
    NSSet * _enabledDetectedObjectTypes;
    int  _lastBoxedFaceCount;
    int  _lastDetectedObjectsCount;
    int  _lastObjectFaceCount;
    unsigned int  _localIDOfDetectedFaceBounds_BE;
    unsigned int  _localIDOfDetectedFaceFaceID_BE;
    unsigned int  _localIDOfDetectedFaceRoll_BE;
    unsigned int  _localIDOfDetectedFaceYaw_BE;
    unsigned int  _localIDOfDetectedFace_BE;
    unsigned int  _localIDsForDetectedCatBodies_BE;
    unsigned int  _localIDsForDetectedDogBodies_BE;
    unsigned int  _localIDsForDetectedHumanBodies_BE;
    unsigned int  _localIDsForDetectedSalientObjects_BE;
    unsigned int  _localIDsForFaces_BE;
    BWNodeOutput * _metadataObjectOutput;
    bool  _metadataObjectOutputEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevBoxedFaceDur;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevBoxedFacePTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevBoxedNoFacePTS;
    long long  _previousDetectedFacesTimestamp;
    long long  _previousDetectedObjectsTimestamp;
    unsigned int  _recordCollectionAtomIdentifier_BE;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectOfInterest;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _rectOfInterestLock;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startMarkerBufferPTS;
}

@property (readonly) NSArray *boxedMetadataOutputs;
@property (readonly) BWNodeOutput *metadataObjectOutput;

+ (void)initialize;

- (bool)boxedMetadataOutputEnabled;
- (id)boxedMetadataOutputs;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithObjectMetadataIdentifiers:(id)arg1 movieFileOutputMetadataIdentifierGroups:(id)arg2;
- (id)metadataObjectOutput;
- (bool)metadataObjectOutputEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterest;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setBoxedMetadataOutputEnabled:(bool)arg1;
- (void)setMetadataObjectOutputEnabled:(bool)arg1;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end

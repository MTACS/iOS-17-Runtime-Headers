
@interface VKARWalkingFeatureDidUpdateInfo : NSObject {
    struct _retain_ptr<VKARWalkingFeature *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKARWalkingFeature *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _feature;
    unsigned long long  _featureLabelIdentifier;
    struct _retain_ptr<VKARWalkingFeatureSet *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKARWalkingFeatureSet *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _featureSet;
    bool  _isDirectlyBehind;
    bool  _isVisible;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _labelPosition;
    struct Unit<geo::DegreeUnitDescription, double> { 
        double _value; 
    }  _screenHeading;
    long long  _updateTypes;
}

@property (nonatomic, readonly) VKARWalkingFeature *feature;
@property (nonatomic, readonly) unsigned long long featureLabelIdentifier;
@property (nonatomic, readonly) VKARWalkingFeatureSet *featureSet;
@property (nonatomic, readonly) bool isDirectlyBehind;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } labelPosition;
@property (nonatomic, readonly) double screenHeading;
@property (nonatomic, readonly) long long updateTypes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)feature;
- (unsigned long long)featureLabelIdentifier;
- (id)featureSet;
- (id)initWithFeature:(id)arg1 featureLabelIdentifier:(unsigned long long)arg2 featureSet:(id)arg3 labelPosition:(const void*)arg4 updateTypes:(long long)arg5 isVisible:(bool)arg6 isDirectlyBehind:(bool)arg7 screenHeading:(struct Unit<geo::DegreeUnitDescription, double> { double x1; })arg8;
- (bool)isDirectlyBehind;
- (bool)isVisible;
- (struct { double x1; double x2; double x3; })labelPosition;
- (double)screenHeading;
- (id)stringForUpdateTypes;
- (long long)updateTypes;

@end

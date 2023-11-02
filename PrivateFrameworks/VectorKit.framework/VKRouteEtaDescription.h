
@interface VKRouteEtaDescription : NSObject {
    struct _retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        NSString *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _etaText;
    unsigned char  _glyphType;
    long long  _routeEtaType;
    GEOFeatureStyleAttributes * _styleAttributes;
}

@property (nonatomic, readonly) NSString *etaText;
@property (nonatomic, readonly) unsigned char glyphType;
@property (nonatomic, readonly) long long routeEtaType;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithEtaText:(id)arg1 styleAttributes:(id)arg2 routeEtaType:(long long)arg3;
- (long long)compare:(id)arg1;
- (id)etaText;
- (unsigned char)glyphType;
- (unsigned long long)hash;
- (id)initWithEtaText:(id)arg1;
- (id)initWithEtaText:(id)arg1 etaAdvisoryFeatureStyleAttributes:(id)arg2;
- (id)initWithEtaText:(id)arg1 etaAdvisoryFeatureStyleAttributes:(id)arg2 routeEtaType:(long long)arg3;
- (id)initWithEtaText:(id)arg1 etaAdvisoryStyleAttributes:(id)arg2;
- (id)initWithEtaText:(id)arg1 etaAdvisoryStyleAttributes:(id)arg2 routeEtaType:(long long)arg3;
- (id)initWithEtaText:(id)arg1 glyphType:(unsigned char)arg2;
- (bool)isEqual:(id)arg1;
- (long long)routeEtaType;
- (id)styleAttributes;

@end

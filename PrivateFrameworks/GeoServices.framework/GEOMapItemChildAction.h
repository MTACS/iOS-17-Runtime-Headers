
@interface GEOMapItemChildAction : NSObject {
    GEOMapItemChildActionSearch * _childActionSearch;
    long long  _childActionType;
    GEOGuideLocation * _guideLocation;
}

@property (nonatomic, retain) GEOMapItemChildActionSearch *childActionSearch;
@property (nonatomic) long long childActionType;
@property (nonatomic, readonly) GEOGuideLocation *guideLocation;

- (void).cxx_destruct;
- (id)childActionSearch;
- (long long)childActionType;
- (id)childActionTypeAsString:(long long)arg1;
- (id)guideLocation;
- (id)initWithChildAction:(id)arg1;
- (void)setChildActionSearch:(id)arg1;
- (void)setChildActionType:(long long)arg1;

@end

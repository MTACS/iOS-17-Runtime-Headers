
@interface MRNowPlayingControllerDestination : MRDestination {
    bool  _isEndpointSet;
    MRPlayerPath * _unresolvedPlayerPath;
}

@property (nonatomic) bool isEndpointSet;
@property (nonatomic, retain) MRPlayerPath *resolvedPlayerPath;
@property (nonatomic, retain) MRPlayerPath *unresolvedPlayerPath;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEndpointSet;
- (id)resolvedPlayerPath;
- (void)setEndpoint:(id)arg1;
- (void)setIsEndpointSet:(bool)arg1;
- (void)setResolvedPlayerPath:(id)arg1;
- (void)setUnresolvedPlayerPath:(id)arg1;
- (id)unresolvedPlayerPath;

@end

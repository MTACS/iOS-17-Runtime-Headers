
@interface GEODirectionIntent : NSObject {
    GEOResolvedItem * _destination;
    GEOResolvedItem * _origin;
    int  _transportType;
}

@property (nonatomic, readonly) GEOResolvedItem *destination;
@property (nonatomic, readonly) GEOResolvedItem *origin;
@property (nonatomic, readonly) int transportType;

- (void).cxx_destruct;
- (id)destination;
- (id)initWithDirectionIntent:(id)arg1;
- (id)origin;
- (int)transportType;

@end

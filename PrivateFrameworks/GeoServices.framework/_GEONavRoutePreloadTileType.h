
@interface _GEONavRoutePreloadTileType : NSObject {
    unsigned long long  _restrictions;
    int  _style;
}

@property (nonatomic, readonly) unsigned long long restrictions;
@property (nonatomic, readonly) int style;

- (id)init;
- (id)initWithStyle:(int)arg1 restrictions:(unsigned long long)arg2;
- (unsigned long long)restrictions;
- (int)style;

@end

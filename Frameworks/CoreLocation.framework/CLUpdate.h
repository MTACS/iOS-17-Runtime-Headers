
@interface CLUpdate : NSObject {
    bool  _isStationary;
    CLLocation * _location;
}

@property (readonly) bool isStationary;
@property (nonatomic, readonly) CLLocation *location;

- (void)dealloc;
- (id)initWithLocation:(id)arg1 isStationary:(unsigned char)arg2;
- (bool)isStationary;
- (id)location;

@end

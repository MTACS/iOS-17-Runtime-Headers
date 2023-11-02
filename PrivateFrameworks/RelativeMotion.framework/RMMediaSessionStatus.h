
@interface RMMediaSessionStatus : NSObject {
    struct { 
        double machAbsTimestamp; 
    }  _internal;
}

@property (readonly, copy) NSString *shortDescription;

- (id)initWithInternal:(const struct { double x1; }*)arg1;
- (id)shortDescription;

@end

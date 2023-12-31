
@interface LPImageRemoteURLRepresentation : NSObject {
    NSURL * _URL;
    unsigned long long  _scale;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly) unsigned long long scale;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithScale:(unsigned long long)arg1 URL:(id)arg2;
- (unsigned long long)scale;

@end

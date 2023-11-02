
@interface NRParameters : NSObject {
    NSObject<OS_nw_parameters> * _parameters;
    unsigned char  _serviceClass;
}

@property (nonatomic) unsigned char serviceClass;

- (void).cxx_destruct;
- (id)copyParameters;
- (id)description;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (unsigned char)serviceClass;
- (void)setServiceClass:(unsigned char)arg1;

@end

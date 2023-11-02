
@interface PTCinematographyNetworkInputSchema : NSObject {
    unsigned long long  _count;
    NSString * _name;
    NSDictionary * _params;
}

@property (readonly) unsigned long long count;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *params;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithModelDictionary:(id)arg1;
- (id)name;
- (id)params;

@end

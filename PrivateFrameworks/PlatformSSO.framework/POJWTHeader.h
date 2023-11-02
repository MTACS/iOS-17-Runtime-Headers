
@interface POJWTHeader : NSObject {
    NSMutableDictionary * _data;
}

@property (readonly) NSString *alg;
@property (readonly) NSDictionary *allData;
@property (readonly) NSString *apu;
@property (readonly) NSString *apv;
@property (readonly) NSString *cty;
@property (retain) NSMutableDictionary *data;
@property (readonly) NSString *enc;
@property (readonly) NSDictionary *epk;
@property (readonly) NSString *kid;
@property (readonly) NSNumber *p2c;
@property (readonly) NSString *p2s;
@property (readonly) NSString *typ;
@property (readonly) NSArray *x5c;
@property (readonly) NSString *x5t;

- (void).cxx_destruct;
- (id)alg;
- (id)allData;
- (id)apu;
- (id)apv;
- (id)cty;
- (id)data;
- (id)dataRepresentation;
- (id)description;
- (id)enc;
- (id)epk;
- (id)init;
- (id)initWithJWTData:(id)arg1;
- (id)kid;
- (id)mutableCopy;
- (id)p2c;
- (id)p2s;
- (void)setData:(id)arg1;
- (id)typ;
- (id)x5c;
- (id)x5t;

@end

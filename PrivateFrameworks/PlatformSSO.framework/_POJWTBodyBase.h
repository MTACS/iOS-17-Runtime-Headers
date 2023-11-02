
@interface _POJWTBodyBase : NSObject <POJWTBody> {
    NSMutableDictionary * _data;
}

@property (readonly) NSDictionary *allData;
@property (retain) NSMutableDictionary *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allData;
- (id)data;
- (id)dataRepresentation;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJWTData:(id)arg1;
- (void)setData:(id)arg1;

@end

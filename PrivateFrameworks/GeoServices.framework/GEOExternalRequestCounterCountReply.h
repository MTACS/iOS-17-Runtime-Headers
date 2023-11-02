
@interface GEOExternalRequestCounterCountReply : GEOXPCReply <GEOXPCReply> {
    NSArray * _objects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *objects;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)objects;
- (void)setObjects:(id)arg1;

@end

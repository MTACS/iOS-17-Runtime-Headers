
@interface EDAMData : FATObject {
    NSData * _body;
    NSData * _bodyHash;
    NSNumber * _size;
}

@property (nonatomic, retain) NSData *body;
@property (nonatomic, retain) NSData *bodyHash;
@property (nonatomic, retain) NSNumber *size;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)body;
- (id)bodyHash;
- (void)setBody:(id)arg1;
- (void)setBodyHash:(id)arg1;
- (void)setSize:(id)arg1;
- (id)size;

@end

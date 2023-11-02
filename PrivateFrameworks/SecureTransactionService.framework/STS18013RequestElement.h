
@interface STS18013RequestElement : NSObject {
    NSString * _name;
    unsigned short  _retention;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned short retention;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 retention:(unsigned short)arg2;
- (id)name;
- (unsigned short)retention;
- (void)setName:(id)arg1;
- (void)setRetention:(unsigned short)arg1;

@end

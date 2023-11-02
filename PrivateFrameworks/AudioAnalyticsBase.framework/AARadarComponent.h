
@interface AARadarComponent : NSObject {
    long long  _identifier;
    NSString * _name;
    NSString * _version;
}

@property (nonatomic) long long identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)asRadarDraft;
- (long long)identifier;
- (id)initWithName:(id)arg1 version:(id)arg2 identifier:(long long)arg3;
- (id)name;
- (void)setIdentifier:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end


@interface IQFMapsPersonalizationLocation : NSObject {
    NSString * _muid;
    NSString * _name;
}

@property (retain) NSString *muid;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (id)initWithMUID:(id)arg1 name:(id)arg2;
- (id)muid;
- (id)name;
- (void)setMuid:(id)arg1;
- (void)setName:(id)arg1;

@end

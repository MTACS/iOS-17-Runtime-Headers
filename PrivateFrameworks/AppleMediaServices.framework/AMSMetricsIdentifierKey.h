
@interface AMSMetricsIdentifierKey : NSObject {
    bool  _crossDeviceSync;
    bool  _isActiveITunesAccountRequired;
    NSString * _name;
}

@property (nonatomic) bool crossDeviceSync;
@property (nonatomic) bool isActiveITunesAccountRequired;
@property (nonatomic, retain) NSString *name;

+ (id)keyWithName:(id)arg1 crossDeviceSync:(bool)arg2;
+ (id)keyWithName:(id)arg1 crossDeviceSync:(bool)arg2 isActiveITunesAccountRequired:(bool)arg3;

- (void).cxx_destruct;
- (bool)crossDeviceSync;
- (bool)isActiveITunesAccountRequired;
- (id)name;
- (void)setCrossDeviceSync:(bool)arg1;
- (void)setIsActiveITunesAccountRequired:(bool)arg1;
- (void)setName:(id)arg1;

@end

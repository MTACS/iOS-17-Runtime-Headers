
@interface STUIDevice : NSObject <NSCopying> {
    NSString * _identifier;
    NSDate * _lastFamilyCheckinDate;
    NSString * _name;
    short  _platform;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSDate *lastFamilyCheckinDate;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) short platform;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithName:(id)arg1 identifier:(id)arg2 platform:(short)arg3 lastFamilyCheckinDate:(id)arg4;
- (id)lastFamilyCheckinDate;
- (id)name;
- (short)platform;

@end

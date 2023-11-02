
@interface SGReminderDueLocation : NSObject {
    unsigned char  _locationType;
    NSString * _name;
    unsigned char  _trigger;
}

@property (nonatomic, readonly) unsigned char locationType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned char trigger;

+ (id)mergeDueLocations:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLocationType:(unsigned char)arg1 trigger:(unsigned char)arg2 name:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReminderDueLocation:(id)arg1;
- (unsigned char)locationType;
- (id)name;
- (unsigned char)trigger;

@end

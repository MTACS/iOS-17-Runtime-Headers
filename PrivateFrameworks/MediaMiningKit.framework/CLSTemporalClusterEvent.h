
@interface CLSTemporalClusterEvent : NSObject {
    unsigned char  _category;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned char category;
@property (nonatomic, readonly) NSString *name;

+ (unsigned char)_categoryFromPortraitEventCategory:(unsigned char)arg1;

- (void).cxx_destruct;
- (unsigned char)category;
- (id)initWithName:(id)arg1 category:(unsigned char)arg2;
- (id)initWithPortraitEvent:(id)arg1;
- (id)name;

@end

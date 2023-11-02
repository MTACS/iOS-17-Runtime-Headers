
@interface MCSignpost : NSObject <NSCopying> {
    NSString * _feature;
    NSString * _process;
    NSDate * _timestamp;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSString *feature;
@property (nonatomic, readonly, copy) NSString *process;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feature;
- (id)initWithProcess:(id)arg1 type:(unsigned long long)arg2 feature:(id)arg3 timestamp:(id)arg4;
- (id)process;
- (id)timestamp;
- (unsigned long long)type;

@end

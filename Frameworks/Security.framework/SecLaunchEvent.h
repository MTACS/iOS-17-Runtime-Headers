
@interface SecLaunchEvent : NSObject <NSCopying> {
    unsigned int  _counter;
    NSDate * _date;
    NSString * _name;
}

@property unsigned int counter;
@property (retain) NSDate *date;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)counter;
- (id)date;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setCounter:(unsigned int)arg1;
- (void)setDate:(id)arg1;
- (void)setName:(id)arg1;

@end

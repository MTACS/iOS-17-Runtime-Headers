
@interface GPURawCounterSelect : NSObject {
    NSString * _name;
    NSDictionary * _options;
    unsigned int  _width;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *options;
@property unsigned int width;

+ (id)selectWithName:(id)arg1;
+ (id)selectWithName:(id)arg1 options:(id)arg2;
+ (id)selectWithName:(id)arg1 width:(unsigned int)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2;
- (id)initWithName:(id)arg1 width:(unsigned int)arg2;
- (id)name;
- (id)options;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;

@end

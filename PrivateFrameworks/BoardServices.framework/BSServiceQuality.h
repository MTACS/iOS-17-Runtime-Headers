
@interface BSServiceQuality : NSObject <NSCopying> {
    bool  _main;
    int  _relativePriority;
    unsigned int  _serviceClass;
    NSString * _serviceClassName;
    bool  _singleton;
}

@property (nonatomic, readonly) int relativePriority;
@property (nonatomic, readonly) unsigned int serviceClass;

+ (id)background;
+ (id)main;
+ (id)serviceWithClass:(unsigned int)arg1;
+ (id)serviceWithClass:(unsigned int)arg1 relativePriority:(int)arg2;
+ (id)userInitiated;
+ (id)userInteractive;
+ (id)utility;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (int)relativePriority;
- (unsigned int)serviceClass;

@end

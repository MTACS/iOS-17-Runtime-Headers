
@interface CLKVideo : NSObject <NSCopying> {
    CLKDevice * _device;
    NSString * _name;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;

+ (id)_videoNamed:(id)arg1 device:(id)arg2 bundle:(id)arg3 modifier:(id)arg4;
+ (id)videoAtURL:(id)arg1 forDevice:(id)arg2;
+ (id)videoNamed:(id)arg1 forDevice:(id)arg2;
+ (id)videoNamed:(id)arg1 forDevice:(id)arg2 inBundle:(id)arg3;
+ (id)videoWithName:(id)arg1 forDevice:(id)arg2 url:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithName:(id)arg1 forDevice:(id)arg2 url:(id)arg3;
- (id)name;
- (id)url;

@end

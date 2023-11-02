
@interface APSMultiUserFS : NSObject {
    bool  _isMultiUser;
    NSString * _systemPathCache;
}

@property (readonly) bool isMultiUser;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithIsMultiUserMode:(bool)arg1;
- (bool)isMultiUser;
- (id)systemPath;

@end
